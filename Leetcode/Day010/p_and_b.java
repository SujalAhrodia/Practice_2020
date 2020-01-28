import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.charset.StandardCharsets;
import java.lang.Math;


class Portfolio
{
  private String name, type;
  private Integer val;
        
  public String getName()
  {
    return name;
  }
  public void setName(String name)
  {
    this.name = name;
  }
  
  public String getType()
  {
    return type;
  }
  public void setType(String type)
  {
    this.type = type;
  }
  
  public Integer getVal()
  {
    return val;
  }
  public void setVal(Integer val)
  {
    this.val = val;
  }
}

class Benchmark
{
  private String name, type;
  private Integer val;
        
  public String getName()
  {
    return name;
  }
  public void setName(String name)
  {
    this.name = name;
  }
  
  public String getType()
  {
    return type;
  }
  public void setType(String type)
  {
    this.type = type;
  }
  
  public Integer getVal()
  {
    return val;
  }
  public void setVal(Integer val)
  {
    this.val = val;
  }
}

public class Main {
  /**
   * Iterate through each line of input.
   */
  public static void main(String[] args) throws IOException {
    InputStreamReader reader = new InputStreamReader(System.in, StandardCharsets.UTF_8);
    BufferedReader in = new BufferedReader(reader);
    String line;
    while ((line = in.readLine()) != null) {
      Main.matchBenchmark(line);
    }
  }
  
  public static void matchBenchmark(String input) {
    // Access your code here. Feel free to create other classes as required
    String[] parts = input.split(":");
    
    String port = parts[0];
    String bench = parts[1];

    String[] port_parts = port.split("\\|");
    String[] bench_parts = bench.split("\\|");
    
    Portfolio[] p = new Portfolio[10];
    Benchmark[] b = new Benchmark[10];
    
    for(int i=0; i<port_parts.length; i++)
    {
      String[] temp = port_parts[i].split(",");
      if(p[i] == null)
        p[i] = new Portfolio();
      p[i].setName(temp[0]);
      p[i].setType(temp[1]);
      p[i].setVal(Integer.parseInt(temp[2]));
//      System.out.println(p[i].getVal());
    }
    
    for(int i=0; i<bench_parts.length; i++)
    {
      String[] temp = bench_parts[i].split(",");
      if(b[i] == null)
        b[i] = new Benchmark();
      b[i].setName(temp[0]);
      b[i].setType(temp[1]);
      b[i].setVal(Integer.parseInt(temp[2]));
//      System.out.println(b[i].getVal());
    }
      
    for(int i=bench_parts.length-1; i>=0; i--)
    {
      boolean flag=false;
      
      for(int j=port_parts.length-1; j>=0; j--)
      {
        if((b[i].getName().equals(p[j].getName())) && (b[i].getType().equals(p[j].getType())))
        {
          flag=true;
          if(b[i].getVal() != p[j].getVal())
          {
            int diff = b[i].getVal() - p[j].getVal();
            
            if(diff < 0)
            {
              System.out.println("SELL," + b[i].getName() + "," + b[i].getType() + "," + String.valueOf(Math.abs(diff)));
            }
            else
            {
              System.out.println("BUY," + b[i].getName() + "," + b[i].getType() + "," + String.valueOf(Math.abs(diff)));
            }
          }
        }
      }
      if(!flag)
      {
        System.out.println("BUY," + b[i].getName() + "," + b[i].getType() + "," + b[i].getVal());
      }
    }
  }

}
