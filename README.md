# CS 4310.01 Project #4 Submission - Kill It

1.) **Full Names:**
   - Rene Dena
   - Nole Serrano
   - Josephine Nguyen
   
2.) **Link to Github:**   https://github.com/SpaceMonkeyClan/FreeNOS-1.0.3

3.) **Link to screencast:** 

**________________________________________________________________________________________________________________**

**Total points: 120**

**Purpose**

Understand the physical and virtual memory management of FreeNOS.

Apply textbook concepts in maintaining a real product.

Get debugging skills.

**Task Description** 

    (5 pts) “Git”:
        Make and check out a branch named “kill”. You will be working on this branch for this project.
        Add GitHub user: “2404s21” to your GitHub organization so that I have access to all your projects.
    (95 pts) Kill it. Write an application named “kill” in folder “FreeNOS-1.0.3\bin\kill”.
        It should work similarly to the ‘kill’ command that comes with Ubuntu. (In your terminal, do “man kill” to learn more.) It should be able to kill a background process (e.g. “sleep 30 &”).

               # sleep 30 &

               # ps       # suppose the pid for ‘sleep’ is 17

               # kill 17

               # ps       # ‘sleep’ is killed

    It should follow the application code structure like the “sleep” command of FreeNOS.

    (20 pts) Record a 3-minute (approx..) screencast with your voice (facial image is optional but encouraged):
        Introduce yourselves;
        Demo killing on a background process by its pid;
        Show off your contribution to FreeNOS: what did you do to implement this application? What you did to get rid of the bug? What debugger did you use?
    Upload the video to Youtube or some other video streaming site.
    Submit a README.md file, listing:
        Your full names;
        The link to your GitHub repo;
        The link to your screencast video.
