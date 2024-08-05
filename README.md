# Kinematic_Variable_Information_Extraction_Physics
--------------------------------------------------------
Development Stage
--------------------------------------------------------

The Script is to extract kinematic variable information of interest event by event and save it to a csv file.
--------------------------------------------------------
The File should be saved inside the examples folder in the Delphes and the user should come back to Delphes folder location in terminal before running the script. <br/> 
To run the script follow: <br/> 
root -l examples/particle_extract.C'("/home/kousik/Madgraph/MG5_aMC_v3_1_1/zz_jjjj_events_enhanced/Events/run_01/tag_1_delphes_events.root")' \\ need to modifie based on the local repository.
# QUARKS
| Quark | ID |
|-------|----|
| <code>d</code> | 1  |
| <code>u</code> | 2  |
| <code>s</code> | 3  |
| <code>c</code> | 4  |
| <code>b</code> | 5  |
| <code>t</code> | 6  |
| <code>b'</code> | 7  |
| <code>t'</code> | 8  |

# LEPTONS
| Lepton | ID |
|--------|----|
| <code>e<sup>-</sup></code> | 11 |
| <code>&nu;<sub>e</sub></code> | 12 |
| <code>&mu;<sup>-</sup></code> | 13 |
| <code>&nu;<sub>&mu;</sub></code> | 14 |
| <code>&tau;<sup>-</sup></code> | 15 |
| <code>&nu;<sub>&tau;</sub></code> | 16 |
| <code>&tau;'<sup>-</sup></code> | 17 |
| <code>&nu;<sub>&tau;'</sub></code> | 18 |


# GAUGE AND HIGGS BOSONS
| Boson | ID |
|-------|----|
| <code>g</code> | (9) 21 |
| <code>&gamma;</code> | 22 |
| <code>Z<sup>0</sup></code> | 23 |
| <code>W<sup>+</sup></code> | 24 |
| <code>h<sup>0</sup> / H<sub>1</sub><sup>0</sup></code> | 25 |
| <code>Z' / Z<sub>2</sub><sup>0</sup></code> | 32 |
| <code>Z'' / Z<sub>3</sub><sup>0</sup></code> | 33 |
| <code>W' / W<sub>2</sub><sup>+</sup></code> | 34 |
| <code>H<sup>0</sup> / H<sub>2</sub><sup>0</sup></code> | 35 |
| <code>A<sup>0</sup> / H<sub>3</sub><sup>0</sup></code> | 36 |
| <code>H<sup>+</sup></code> | 37 |

-------------------------------------------------------
This will give output of Event_Number,Particle_No,PID,Charge,PT 
The actul particle can be identified as with the help of PID number above
