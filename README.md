# CS 4310.01 Project #3 Submission - Prioritize It

1.) **Full Names:**
   - Rene Dena
   - Nole Serrano
   - Josephine Nguyen
   
2.) **Link to Github:**   https://github.com/SpaceMonkeyClan/FreeNOS-1.0.3

3.) **Link to screencast:** https://youtu.be/ascon0wbfjM
 
**________________________________________________________________________________________________________________**

**Total points: 100**

**Purpose**

Understand process scheduling of FreeNOS.

Get hands-on with process priority scheduling implementation.

**Task Description**   

    (20 pts) Add priority to the PCB class in FreeNOS. Work on a new branch called “priority” in your FreeNos repo. The (u8) PriorityLevel goes from 1 to 5 (low to high priority)
    (10 pts) Change the “ps” application to display priority level of processes when you do:

       # ps –l

    (20 pts) Download the "sc" application ("slow_calcs") and put the extracted folder in "FreeNOS\bin". Write an application named “renice” in folder “FreeNOS\bin\renice”, which should work similarly to the “renice” command on Ubuntu. (“# man renice”) This directory and code within should follow the structure of “ps” application.

      Example run: (after you implement the supporting functions in FreeNOS)

      # sc 360 &    #this gives your around 1 minute running time.

      # sc 300 &   #this gives your around 0.5 minute running time.

      # ps –l #suppose the output has PID 17 for “sc 300”

      # renice –n 2 17 #tell Process 17 to be run at priority 2

      # ps –l # make sure the priority changes for “sc 300”

      # # wait to see that “sc 360” finish before “sc 300”

    (30 pts) Add support in FreeNOS kernel and system libraries for priority-based scheduling. It can be a simple linear Ready Queue, or you can use the ML algorithm from Zybooks for 10 points in extra credit.
    (10 pts) Record a 3-minute (approx..) screencast with your voice (facial image is optional but encouraged) and upload it to a video streaming site like Youtube. The video should include:
        Introduce yourselves;
        Demo run your code;
        Each team member comment on your code: what did you do? Any challenges? How did you overcome them? Any new understanding or insights?
    (10 pts) Submit a README.md file, listing:
        Your full names;
        The link to your GitHub repo (you should also maintain a README.md in your GitHub repo, which is updated with information about features/branches added);
        The link to your screencast video.
