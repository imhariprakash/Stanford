#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void ece()
{
    int point[8][9],size[8]={8,8,9,8,9,9,8,3},n,i,j,sum_credits=0;
    float sum,gpa[8];
    int a,nn;
    int credit[8][9]={{4,4,3,3,3,4,2,2},{4,4,3,3,4,3,2,2},{4,3,3,4,3,3,2,2,1},{4,3,3,4,3,3,2,2},{3,4,3,3,3,3,2,2,2},{3,3,3,3,3,3,2,2,1},{3,3,3,3,3,3,2,2},{3,3,10}};
    int total_credit[8]={25,25,25,24,25,23,22,16};
    char subject[8][9][60]={{"Communicative English: ","Engineering Mathematics - I: ","Engineering Physics: ","Engineering Chemistry: ","Problem Solving and Python Programming: ","Engineering Graphics: ","Problem Solving and Python Programming Laboratory: ","Physics and Chemistry Laboratory: "},{"Technical English: ","Engineering Mathematics - II :","Physics for Electronics Engineering: ","Basic Electrical and Instrumentation Engineering: ","Circuit Analysis: ","Electronic Devices: ","Circuits and Devices Laboratory: ","Engineering Practices Laboratory: "},{"Linear Algebra and Partial Differential Equations: ","Fundamentals of Data Structures In C : ","Electronic Circuits- I :","Signals and Systems : ","Digital Electronics: ","Control Systems Engineering : ","Fundamentals of Data Structures in C Laboratory: ","Analog and Digital Circuits Laboratory: ","Interpersonal Skills/Listening &Speaking:"},{"Probability and Random Processes: ","Electronic Circuits II: ","Communication Theory: ","Electromagnetic Fields: ","Linear Integrated Circuits: ","Environmental Science and Engineering: ","Circuits Design and Simulation Laboratory: ","Linear Integrated Circuits Laboratory: " },{"Digital Communication: ","Discrete-Time Signal Processing : ","Computer Architecture and Organization: ","Communication Networks: ","Professional Elective I: ","Open Elective I : ","Digital Signal Processing Laboratory: ","Communication Systems Laboratory : ","Communication Networks Laboratory: "},{"Microprocessors and Microcontrollers : ","VLSI Design: ","Wireless Communication: ","Principles of Management: ","Transmission Lines and RF Systems: ","Professional Elective -II: ","Microprocessors and Microcontrollers Laboratory: ","VLSI Design Laboratory: ","Technical Seminar: "},{"Antennas and Microwave Engineering : ","Optical Communication: ","Embedded and Real Time Systems: ","Ad hoc and Wireless Sensor Networks: ","Professional Elective -III :","Open Elective - II: ","Embedded Laboratory: ","Advanced Communication Laboratory: "},{"Professional Elective IV: ","Professional Elective V: ","Project Work: "}};
    printf("\nECE\n");
    printf("1.GPA 2.CGPA");
    printf("\nEnter the number: ");
    scanf("%d",&nn);
    if(nn==2)
    {
    printf("CGPA upto sem: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        gpa[i]=sum;
        printf("GPA of sem %d is %f.\n",i+1,(float)gpa[i]/total_credit[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+gpa[i];
        sum_credits+=total_credit[i];
    }
    printf("CGPA is %f.\n",sum/sum_credits);
    }
    else if(nn==1)
    {
        printf("Enter Sem: ");
        scanf("%d",&i);
        i=i-1;
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }    
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        printf("GPA for sem %d is : %f.\n",i,(float)sum/total_credit[i]);
    }
}

void cse()
{
    printf("\nCSE\n");
    int point[8][9],size[8]={8,8,9,9,9,10,8,3},n,i,j,sum_credits=0;
    float sum,gpa[8];
    int a,nn;
    int credit[8][10]={{4,4,3,3,3,4,2,2},{4,4,3,3,3,3,2,2},{4,4,3,3,3,2,2,2,1},{4,3,3,3,3,3,2,2,1},{4,3,3,3,3,3,2,2,2},{3,3,3,4,3,3,2,2,1,1},{3,3,3,3,3,3,2,2},{3,3,10}};
    int total_credit[8]={25,24,24,24,25,25,22,16};
    char subject[8][9][60]={{"Communicative English: ","Engineering Mathematics - I: ","Engineering Physics: ","Engineering Chemistry: ","Problem Solving and Python Programming: ","Engineering Graphics: ","Problem Solving and Python Programming Laboratory: ","Physics and Chemistry Laboratory: "},{"Technical English: ","Engineering Mathematics - II :","Physics for Information Science: ","Basic Electrical,Electronics and Measurement Engineering: ","Environmental Science and Engineering: ","Programming in C: ","Engineering Practices Laboratory: ","C Programming Laboratory: "},{"Discrete Mathematics: ","Digital Principles and System Design : ","Data Structures :","Object Oriented Programming: ","Communication Engineering: ","Data Structures Laboratory : ","Object Oriented Programming Laboratory: ","Digital Systems Laboratory: ","Interpersonal Skills/listening & Speaking:"},{"Probability and Queueing Theory: ","Computer Architecture: ","Database Management Systems: ","Design and Analysis of Algorithms: ","Operating Systems: ","Software Engineering: ","Database Management Systems Laboratory: ","Operating Systems Laboratory: ","Advanced Reading and writing: " },{"Algebra and Number theory: ","Computer Networks : ","Microprocessors and Microcontrollers: ","Theory of Computation: ","Object Oriented Analysis and Design: ","Open Elective I : ","Microprocessors and Microcontrollers Laboratory: ","Object Oriented Analysis and Design Laboratory : ","Networks Laboratory: "},{"Internet Programming : ","Artificial Intelligence: ","Mobile Computing: ","Compiler Design: ","Distributed Systems: ","Professional Elective -I: ","Internet Programming Laboratory: ","Mobile Application and Development Laboratory: ","Mini Project: ","Professional Communication: "},{"Principles of Management : ","Cryptography and Network Security: ","Cloud Computing: ","Open Elective - II: ","Professional Elective -II :","Professional Elective -III :","Cloud Computing  Laboratory: ","Security Laboratory: "},{"Professional Elective IV: ","Professional Elective V: ","Project Work: "}};
    printf("1.GPA 2.CGPA");
    printf("\nEnter the number: ");
    scanf("%d",&nn);
    if(nn==2)
    {
    printf("CGPA upto sem: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        gpa[i]=sum;
        printf("GPA of sem %d is %f.\n",i+1,(float)gpa[i]/total_credit[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+gpa[i];
        sum_credits+=total_credit[i];
    }
    printf("CGPA is %f.\n",sum/sum_credits);
    }
    else if(nn==1)
    {
        printf("Enter Sem: ");
        scanf("%d",&i);
        i=i-1;
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }    
        for(j=0;j<size[i];j++)
        {
             sum=sum+(point[i][j]*credit[i][j]);
        }
        printf("GPA for sem %d is : %f.\n",i,(float)sum/total_credit[i]);
        }
}

void it()
{
    printf("\nIT\n");
    int point[8][9],size[8]={8,9,9,9,9,10,8,3},n,i,j,sum_credits=0;
    float sum,gpa[8];
    int a,nn;
    int credit[8][10]={{4,4,3,3,3,4,2,2},{4,4,3,3,3,3,2,2,1},{4,4,3,3,3,2,2,2,1},{4,3,3,3,3,3,2,2,1},{4,3,3,3,3,3,2,2,2},{3,3,3,3,3,3,2,2,1,1},{3,3,3,3,3,3,2,2},{3,3,10}};
    int total_credit[8]={25,25,24,24,25,24,22,16};
    char subject[8][9][60]={{"Communicative English: ","Engineering Mathematics - I: ","Engineering Physics: ","Engineering Chemistry: ","Problem Solving and Python Programming: ","Engineering Graphics: ","Problem Solving and Python Programming Laboratory: ","Physics and Chemistry Laboratory: "},{"Technical English: ","Engineering Mathematics - II :","Physics for Information Science: ","Basic Electrical,Electronics and Measurement Engineering: ","Information Technology Essentials: ","Programming in C: ","Engineering Practices Laboratory: ","C Programming Laboratory: ","Information Technology Essentials Laboratory: "},{"Discrete Mathematics: ","Digital Principles and System Design : ","Data Structures :","Object Oriented Programming: ","Analog and Digital Communication: ","Data Structures Laboratory : ","Object Oriented Programming Laboratory: ","Digital Systems Laboratory: ","Interpersonal Skills/listening & Speaking:"},{"Probability and Statistics: ","Computer Architecture: ","Database Management Systems: ","Design and Analysis of Algorithms: ","Operating Systems: ","Environmental Science and Engineering: ","Database Management Systems Laboratory: ","Operating Systems Laboratory: ","Advanced Reading and writing: " },{"Algebra and Number theory: ","Computer Networks : ","Microprocessors and Microcontrollers: ","Web Technology: ","Software Engineering: ","Open Elective I : ","Microprocessors and Microcontrollers Laboratory: ","Networks Laboratory: ","Web Technology Laboratory: "},{"Computational Intelligence : ","Object Oriented Analysis and Design: ","Mobile Communication: ","Big Data Analytics: ","Computer Graphics and Multimedia: ","Professional Elective -I: ","Mobile Application Development Laboratory: ","Object Oriented Analysis and Design Laboratory: ","Mini Project: ","Professional Communication: "},{"Principles of Management : ","Cryptography and Network Security: ","Cloud Computing: ","Open Elective - II: ","Professional Elective -II :","Professional Elective -III :","FOSS and Cloud Computing  Laboratory: ","Security Laboratory: "},{"Professional Elective IV: ","Professional Elective V: ","Project Work: "}};
    printf("1.GPA 2.CGPA");
    printf("\nEnter the number: ");
    scanf("%d",&nn);
    if(nn==2)
    {
    printf("CGPA upto sem: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        gpa[i]=sum;
        printf("GPA of sem %d is %f.\n",i+1,(float)gpa[i]/total_credit[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+gpa[i];
        sum_credits+=total_credit[i];
    }
    printf("CGPA is %f.\n",sum/sum_credits);
    }
    else if(nn==1)
    {
        printf("Enter Sem: ");
        scanf("%d",&i);
        i=i-1;
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }    
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        printf("GPA for sem %d is : %f.\n",i,(float)sum/total_credit[i]);
    }
}

void eee()
{
    printf("\nEEE\n");
    int point[8][9],size[8]={8,8,8,9,9,8,8,3},n,i,j,sum_credits=0;
    float sum,gpa[8];
    int a,nn;
    int credit[8][9]={{4,4,3,3,3,4,2,2},{4,4,3,4,3,3,2,2},{4,3,3,3,3,3,2,2},{4,3,3,3,3,4,2,2,1},{3,3,3,3,3,3,2,1,2},{3,3,3,3,3,2,2,2},{3,3,3,3,3,3,2,2},{3,3,10}};
    int total_credit[8]={25,25,23,25,23,21,22,16};
    char subject[8][9][60]={{"Communicative English: ","Engineering Mathematics - I: ","Engineering Physics: ","Engineering Chemistry: ","Problem Solving and Python Programming: ","Engineering Graphics: ","Problem Solving and Python Programming Laboratory: ","Physics and Chemistry Laboratory: "},{"Technical English: ","Engineering Mathematics - II :","Physics for Electronics Engineering: ","Basic Civil and Mechanical Engineering: ","Circuit Theory: ","Environmental Science and Engineering: ","Engineering Practices Laboratory: ","Electric Circuits Laboratory: "},{"Transforms and Partial Differential Equations: ","Digital Logic Circuits : ","Electromagnetic Theory: ","Electrical Machines-I : ","Electron Devices and Circuits: ","Power Plant Engineering : ","Electronics Laboratory: ","Electrical Machines Laboratory-I: "},{"Numerical Methods: ","Electrical Machines-II: ","Transmission and Distribution: ","Measurements and Instrumentation: ","Linear Integrated Circuits and applications: ","Control Systems: ","Electrical Machines Laboratory-II: ","Linear and Digital Integrated Circuits Laboratory: ","Technical Seminar: " },{"Power System Analysis: ","Microprocessors and Microcontrollers : ","Power Electronics: ","Digital Signal Processing: ","Object Oriented Programming: ","Open Elective I : ","Control and Instrumentation Laboratory: ","Professional Communication : ","Object Oriented Programming Laboratory: "},{"Solid state Drives: ","Protection and Switchgear: ","Embedded Systems: ","Professional Elective-I: ","Professional Elective-II: ","Power Electronics and Drives Laboratory: ","Microprocessors and Microcontrollers Laboratory: ","Mini Project: "},{"High Voltage Engineering : ","Power System Operation and Control: ","Renewable Energy Systems: ","Open Elective-II: ","Professional Elective -III :","Professional Elective - IV: ","Power System Simulation Laboratory: ","Renewable Energy Systems Laboratory: "},{"Professional Elective V: ","Professional Elective VI: ","Project Work: "}};
    printf("1.GPA 2.CGPA");
    printf("\nEnter the number: ");
    scanf("%d",&nn);
    if(nn==2)
    {
    printf("CGPA upto sem: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        gpa[i]=sum;
        printf("GPA of sem %d is %f.\n",i+1,(float)gpa[i]/total_credit[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+gpa[i];
        sum_credits+=total_credit[i];
    }
    printf("CGPA is %f.\n",sum/sum_credits);
    }
    else if(nn==1)
    {
        printf("Enter Sem: ");
        scanf("%d",&i);
        i=i-1;
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }    
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        printf("GPA for sem %d is : %f.\n",i,(float)sum/total_credit[i]);
    }
}

void mech()
{
    printf("\nMech\n");
    int point[8][9],size[8]={8,8,9,9,8,9,9,3},n,i,j,sum_credits=0;
    float sum,gpa[8];
    int a,nn;
    int credit[8][9]={{4,4,3,3,3,4,2,2},{4,4,3,3,3,4,2,2},{4,4,4,3,3,2,2,2,1},{4,3,3,3,3,3,2,2,1},{3,3,3,4,3,2,2,2},{3,3,4,3,3,3,2,2,1},{3,3,3,3,3,3,2,2,1},{3,3,10}};
    int total_credit[8]={25,25,25,24,22,24,23,16};
    char subject[8][9][60]={{"Communicative English: ","Engineering Mathematics - I: ","Engineering Physics: ","Engineering Chemistry: ","Problem Solving and Python Programming: ","Engineering Graphics: ","Problem Solving and Python Programming Laboratory: ","Physics and Chemistry Laboratory: "},{"Technical English: ","Engineering Mathematics - II :","Materials Science: ","Basic Electrical,Electronics and Instrumentational Engineering: ","Environmental Science and Engineering: ","Engineering Mechanics: ","Engineering Practices Laboratory: ","Basic Electrical,Electronics and Instrumental Engineering Laboratory: " },{"Transforms and Partial Differential Equations: ","Engineering Thermodynamics: ","Fluid Mechanics and Machinery: ","Manufacturing Technology-I: ","Electrical Drives and Controls: ","Manufacturing Technology Laboratory-I: ","Computer Aided Machine Drawing: ","Electrical Engineering Laboratory: ","Interpersonal Skills / Listening & Speaking: "},{"Statistics and Numerical Methods: ","Kinematics of Machinery: ","Manufacturing Technology-II: ","Engineering Metallurgy: ","Strength of Materials for Mechanical Engineers: ","Thermal Engineering-I: ","Manufacturing Technology Laboratory-II: ","Strength of Materials and Fluid Mechanics and Machinery Laboratory: ","Advanced Reading and Writing: "},{"Thermal Engineering-II: ","Design of Machine Elements: ","Metrology and Measurements: ","Dynamics of Machines: ","Open Elective-I: ","Kinematics and Dynamics Laboratory: ","Thermal Engineering Laboratory: ","Metrology and Measurements Laboratory: "},{"Design of Transmission Systems: ","Computer Aided Design and Manufacturing: ","Heat and Mass Transfer: ","Finite Element Analysis: ","Hydraulics and Pneumatics: ","Professional Elective-I: ","CAD/CAM Laboratory: ","Design and Fabrication Project: ","Professional Communication: "},{"Power Plant Engineering: ","Process Planning and Cost Estimation: ","Mechatronics: ","Open Elective-II: ","Professional Elective-II: ","Professional Elective-III: ","Simulation and Analysis Laboratory: ","Mechatronics Laboratory: ","Technical Seminar: "},{"Professional Elective V: ","Professional Elective VI: ","Project Work: "}};
    printf("1.GPA 2.CGPA");
    printf("\nEnter the number: ");
    scanf("%d",&nn);
    if(nn==2)
    {
    printf("CGPA upto sem: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        gpa[i]=sum;
        printf("GPA of sem %d is %f.\n",i+1,(float)gpa[i]/total_credit[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+gpa[i];
        sum_credits+=total_credit[i];
    }
    printf("CGPA is %f.\n",sum/sum_credits);
    }
    else if(nn==1)
    {
        printf("Enter Sem: ");
        scanf("%d",&i);
        i=i-1;
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }    
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        printf("GPA for sem %d is : %f.\n",i,(float)sum/total_credit[i]);
    }
}

void civil()
{
    printf("\nCivil\n");
    int point[8][9],size[8]={8,8,9,9,9,9,7,3},n,i,j,sum_credits=0;
    float sum,gpa[8];
    int a,nn;
    int credit[8][9]={{4,4,3,3,3,4,2,2},{4,4,3,3,3,4,2,2},{4,3,3,3,3,3,2,2,1},{4,3,3,3,3,3,2,2,1},{4,3,3,3,3,3,2,2,2},{4,3,3,3,3,3,2,2,1},{3,3,4,3,3,2,2},{3,3,10}};
    int total_credit[8]={25,25,25,24,22,24,23,16};
    char subject[8][9][60]={{"Communicative English: ","Engineering Mathematics - I: ","Engineering Physics: ","Engineering Chemistry: ","Problem Solving and Python Programming: ","Engineering Graphics: ","Problem Solving and Python Programming Laboratory: ","Physics and Chemistry Laboratory: "},{"Technical English: ","Engineering Mathematics - II :","Physics for Civil Engineering: ","Basic Electrical and Electronics Engineering: ","Environmental Science and Engineering: ","Engineering Mechanics: ","Engineering Practices Laboratory: ","Computer Aided Building Drawing Laboratory: " },{"Transforms and Partial Differential Equations: ","Strengths of Materials-I: ","Fluid Mechanics: ","Surveying: ","Construction Materials: ","Engineering Geology: ","Construction Materials Laboratory: ","Surveying Laboratory: ","Interpersonal Skills / Listening & Speaking: "},{"Numerical Methods: ","Construction Techniques and Practices: ","Strength of Materials-II: ","Applied Hydraulic Engineering: ","Concrete Technology: ","Soil Mechanics: ","Strengths of Materials Laboratory: ","Hydraulic Engineering Laboratory: ","Advanced Reading and Writing: "},{"Design of Reinforced Cement Concrete Elements: ","Structural Analysis-I: ","Water Supply Engineering: ","Foundation Engineering: ","Professional Elective-I: ","Open Elective-I: ","Soil Mechanics Laboratory: ","Water and Waste Water Analysis Laboratory: ","Survey Camp: "},{"Design of Steel Structural Elements: ","Structural Analysis-II: ","Irrigation Engineering: ","Highway Engineering: ","Waste Water Engineering: ","Professional Elective-II: ","Highway Engineering Laboratory: ","Irrigation and Environmental Engineering Drawing: ","Professional Communication: "},{"Estimation,Costing and Valuation Engineering: ","Railways,Airports,Docks and Harbour Engineering: ","Structural Design and Drawing: ","Professional Elective-III: ","Open Elective-II: ","Professional Elective-III: ","Creative and Innovative Project: ","Industrial Training: "},{"Professional Elective V: ","Professional Elective VI: ","Project Work: "}};
    printf("1.GPA 2.CGPA");
    printf("\nEnter the number: ");
    scanf("%d",&nn);
    if(nn==2)
    {
    printf("CGPA upto sem: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<size[i];j++)
        {
            sum=sum+(point[i][j]*credit[i][j]);
        }
        gpa[i]=sum;
        printf("GPA of sem %d is %f.\n",i+1,(float)gpa[i]/total_credit[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+gpa[i];
        sum_credits+=total_credit[i];
    }
    printf("CGPA is %f.\n",sum/sum_credits);
    }
    else if(nn==1)
    {
        printf("Enter Sem: ");
        scanf("%d",&i);
        i=i-1;
        printf("\nSEM-%d\n\n",i+1);
        for(j=0;j<size[i];j++)
        {
            printf("%s",subject[i][j]);
            scanf("%d",&point[i][j]);
        }    
        for(j=0;j<size[i];j++)
        { 
            sum=sum+(point[i][j]*credit[i][j]);
        }
        printf("GPA for sem %d is : %f.\n",i,(float)sum/total_credit[i]);
    }
}

int main()
{
    int n;
    printf("1. ECE 2. CSE 3. EEE 4. IT 5. MECH 6. CIVIL");
    printf("\nEnter the Department (Number): ");
    scanf("%d",&n);
    printf("O - 10, A+ - 9, A - 8, B+ - 7,B - 6,F - 0\n");
    switch(n)
    {
            case(1):
            {
                ece();break;
            }
            case(2):
            {
                cse();break;
            }
            case(3):
            {
                eee();break;
            }
            case(4):
            {
                it();break;
            }
            case(5):
            {
                mech();break;
            }
            case(6):
            {
                civil();break;
            }
        default:
            {
                printf("Enter any number between 1 to 6 based on the department: ");
                break;
            }
    }
    return 0;
}