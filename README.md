# CS 4310.01 Project #2 Submission - Wait For It...

1.) **Full Names:**
   - Rene Dena
   - Nole Serrano
   - Josephine Nguyen
   
2.) **Link to Github:**   https://github.com/SpaceMonkeyClan/FreeNOS-1.0.3

3.) **Link to screencast:** https://youtu.be/q2OxhanXMFw
 
**________________________________________________________________________________________________________________**

**Total points: 100**

**Purpose**

Understand the structure of FreeNOS (API, system calls, traps).

“Git” ready.

Get debugging skills.

**Task Description**  

    (20 pts) “Git”:
        Follow this guide, and make your FreeNOS-1.0.3 Folder a git repo, make its remote repo (“origin”) a new repo in your GitHub account. (Checkout this Git Cheatsheet for fun)
        Make and check out a branch named “wait”. You will be working on this branch for this project.
        Add GitHub user: “2404s21” as a collaborator.
    (60 pts) Start waiting. Write an application named “wait” in folder “FreeNOS-1.0.3\bin\wait”.
        It should work similarly to the wait command that comes with Ubuntu. (In your terminal, do “man wait” to learn more.) It should be able to wait for a background process (e.g. “sleep 30 &”) to finish and return. Sample command on a Linux/FreeNOS:
            sleep 30 &
            ps     (suppose the pid of "sleep 30" is 17)
            wait 17
            (Now wait is blocked until "sleep 30" returns.)
        It should follow the application code structure like the “sleep” command of FreeNOS.
    (20 pts) Record a 3-minute (approx..) screencast with your voice (facial image is optional but encouraged):
        Introduce yourselves;
        Demo waiting on a background process by its pid;
        Show off your contribution to FreeNOS: what did you do to implement this application? what you did to get rid of the bug? What debugger did you use?
    Upload the video to Youtube or some other video streaming site.
    Submit a README.md file, listing:
        Your full names;
        The link to your GitHub repo;
        The link to your screencast video.
