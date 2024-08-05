# Kinematic_Variable_Information_Extraction_Physics
--------------------------------------------------------
Development Stage
--------------------------------------------------------

The Script is to extract kinematic variable information of interest event by event and save it to a csv file.
--------------------------------------------------------
The File should be saved inside the examples folder in the Delphes and the user should come back to Delphes folder location in terminal before running the script. <br/> 
To run the script follow: <br/> 
root -l examples/particle_extract.C'("/home/kousik/Madgraph/MG5_aMC_v3_1_1/zz_jjjj_events_enhanced/Events/run_01/tag_1_delphes_events.root")' \\ need to modifie based on the local repository.
<br/> 
QUARKS
\begin{tabular}{ll}
$d$ & 1 \\
$u$ & 2 \\
$s$ & 3 \\
$c$ & 4 \\
$b$ & 5 \\
$t$ & 6 \\
$b^{\prime}$ & 7 \\
$t^{\prime}$ & 8
\end{tabular}

LEPTONS
\begin{tabular}{ll}
$e^{-}$ & 11 \\
$\nu_e$ & 12 \\
$\mu^{-}$ & 13 \\
$\nu_\mu$ & 14 \\
$\tau^{-}$ & 15 \\
$\nu_\tau$ & 16 \\
$\tau^{\prime-}$ & 17 \\
$\nu_{\tau^{\prime}}$ & 18
\end{tabular}

EXCITED
PARTICLES
$d^* 4000001$
$u^* 4000002$
$e^* 4000011$
$\nu_e^* 4000012$
GAUGE AND HIGGS BOSONS
\begin{tabular}{lr}
$g$ & (9) 21 \\
$\gamma$ & 22 \\
$Z^0$ & 23 \\
$W^{+}$ & 24 \\
$h^0 / H_1^0$ & 25 \\
$Z^{\prime} / Z_2^0$ & 32 \\
$Z^{\prime \prime} / Z_3^0$ & 33 \\
$W^{\prime} / W_2^{+}$ & 34 \\
$H^0 / H_2^0$ & 35 \\
$A^0 / H_3^0$ & 36 \\
$H^{+}$ & 37
\end{tabular}
