#include <vector>

int totEntries;

void pi0PeaksFromMC()
{
  const double pi0mass = 0.135;
  totEntries = 0;
  TCanvas* pi0PtCanvas = new TCanvas("pi0PtCanvas","pi0PtCanvas",2000,1600);

  int cutFile = 0;
  /*Cut Numbers correspondance
    0 = 00000113_1111121063032220000_0163103100000050
    1 = 00000013_1111121063032220000_0163103100000050
    2 = 00052013_1111121063032220000_0163103100000050
    3 = 00083013_1111121063032220000_0163103100000050
    4 = 00085013_1111121063032220000_0163103100000050
  //*/

  pi0PtCanvas->Divide(4,4);
  if(pi0PtCanvas->cd(5))
    {
      cout << "divide happened" << endl;
    }
  pi0PtCanvas->cd(1);
 
  //TCanvas *c1 = new TCanvas("c1","c1", 2000, 400);
  //c1->Divide(2,1);
  //c1->cd(1);

  //decorations and beautifying
  gStyle->SetOptStat(0);
  gStyle->SetTitleX(0.3f);
  gStyle->SetTitleW(0.8f);
  //gStyle->SetTitleAlign(14);

  double pt[16] = {0};
  double ptE[16] = {0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.1, 0.2, 0.2, 0.25, 1.0, 4.0};
  TH1D* ptHist[16];

  ptHist[0] = new TH1D("pi0Pt1_4To1_6", "pi0Pt1_4To1_6", 800, 0, 0.8);
  ptHist[0] = static_cast<TH1D*>(makePtHist(ptHist[0], 1.4, 1.6, 0, cutFile));
  pt[0] = (1.4+1.6)/2.0;

  ptHist[1] = new TH1D("pi0Pt1_6To1_8", "pi0Pt1_6To1_8", 800, 0, 0.8);
  ptHist[1] = static_cast<TH1D*>(makePtHist(ptHist[1], 1.6, 1.8, 0, cutFile));
  pt[1] = (1.6+1.8)/2.0;
 
  ptHist[2] = new TH1D("pi0Pt1_8To2_0", "pi0Pt1_8To2_0", 800, 0, 0.8);
  ptHist[2] = static_cast<TH1D*>(makePtHist(ptHist[2], 1.8,2.0, 0, cutFile));
  pt[2] = (1.8+2.0)/2.0;
  
  ptHist[3] = new TH1D("pi0Pt2_0To2_2", "pi0Pt2_0To2_2", 800, 0, 0.8);
  ptHist[3] = static_cast<TH1D*>(makePtHist(ptHist[3], 2.0, 2.2, 0, cutFile));
  pt[3] = (2.0+2.2)/2.0;
  
  ptHist[4] = new TH1D("pi0Pt2_2To2_4", "pi0Pt2_2To2_4", 800, 0, 0.8);
  ptHist[4] = static_cast<TH1D*>(makePtHist(ptHist[4], 2.2, 2.4, 0, cutFile));
  pt[4] = (2.2+2.4)/2.0;

  ptHist[5] = new TH1D("pi0Pt2_4To2_6", "pi0Pt2_4To2_6", 800, 0, 0.8);
  ptHist[5] = static_cast<TH1D*>(makePtHist(ptHist[5], 2.4, 2.6, 0, cutFile));
  pt[5] = (2.4+2.6)/2.0;

  ptHist[6] = new TH1D("pi0Pt2_6To2_8", "pi0Pt2_6To2_8", 800, 0, 0.8);
  ptHist[6] = static_cast<TH1D*>(makePtHist(ptHist[6], 2.6, 2.8, 0, cutFile));
  pt[6] = (2.6+2.8)/2.0;
  
  ptHist[7] = new TH1D("pi0Pt2_8To3_0", "pi0Pt2_8To3_0", 800, 0, 0.8);
  ptHist[7] = static_cast<TH1D*>(makePtHist(ptHist[7], 2.8, 3.0, 0, cutFile));
  pt[7] = (2.8+3.0)/2.0;
  
  ptHist[8] = new TH1D("pi0Pt3_0To3_2", "pi0Pt3_0To3_2", 800, 0, 0.8);
  ptHist[8] = static_cast<TH1D*>(makePtHist(ptHist[8], 3.0, 3.2, 0, cutFile));
  pt[8] = (3.0+3.2)/2.0;

  ptHist[9] = new TH1D("pi0Pt3_2To3_6", "pi0Pt3_2To3_6", 800, 0, 0.8);
  ptHist[9] = static_cast<TH1D*>(makePtHist(ptHist[9], 3.2, 3.6, 2, cutFile));
  pt[9] = (3.2+3.6)/2.0;

  ptHist[10] = new TH1D("pi0Pt3_6To4_0", "pi0Pt3_6To4_0", 800, 0, 0.8);
  ptHist[10] = static_cast<TH1D*>(makePtHist(ptHist[10], 3.6, 4.0, 2, cutFile));
  pt[10] = (3.6+4.0)/2.0;

  ptHist[11] = new TH1D("pi0Pt4_0To5_0", "pi0Pt4_0To5_0", 800, 0, 0.8);
  ptHist[11] = static_cast<TH1D*>(makePtHist(ptHist[11],4.0, 5.0, 4, cutFile));
  pt[11] = (4.0+5.0)/2.0;

  ptHist[12] = new TH1D("pi0Pt5_0To7_0", "pi0Pt5_0To7_0", 800, 0, 0.8);
  ptHist[12] = static_cast<TH1D*>(makePtHist(ptHist[12],5.0, 7.0, 4, cutFile));
  pt[12] = (5.0+7.0)/2.0;

  ptHist[13] = new TH1D("pi0Pt7_0To10_0", "pi0Pt7_0To15_0", 800, 0, 0.8);
  ptHist[13] = static_cast<TH1D*>(makePtHist(ptHist[13],7.0, 15.0, 5, cutFile));
  pt[13] = (7.0+15.0)/2.0;
  
  double ptLow, ptHigh, yield, meanMass, yMin, sigma, yMax;
  int binX = 0;
  TF1 *f1 = new TF1("f1","expo+gaus(2)",0.01,10);//the fitting function
  f1->SetParameters(1,0.6,1,0.13,0.01);


  TGraphErrors *pi0Yield = new TGraphErrors();//yield vs pt graph
  TLine *line = new TLine();
  
  //Drawing, and fitting
  /*pi0PtCanvas->cd(1);
  ptHist[0]->Draw("");
  ptHist[0]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(2);
  ptHist[1]->Draw("E1");
  ptHist[1]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(3);
  ptHist[2]->Draw("E1");
  ptHist[2]->Fit("f1", "Q");

  pi0PtCanvas->cd(4);
  ptHist[3]->Draw("E1");
  ptHist[3]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(5);
  ptHist[4]->Draw("E1");
  ptHist[4]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(6);
  ptHist[5]->Draw("E1");
  ptHist[5]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(7);
  ptHist[6]->Draw("E1");
  ptHist[6]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(8);
  ptHist[7]->Draw("E1");
  ptHist[7]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(9);
  ptHist[8]->Draw("E1");
  ptHist[8]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(10);
  ptHist[9]->Draw("E1");
  ptHist[9]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(11);
  ptHist[10]->Draw("E1");
  ptHist[10]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(12);
  ptHist[11]->Draw("E1");
  ptHist[11]->Fit("f1", "Q");
  
  pi0PtCanvas->cd(13);
  ptHist[12]->Draw("E1");
  ptHist[12]->Fit("f1", "Q");

  pi0PtCanvas->cd(14);
  ptHist[13]->Draw("E1");
  ptHist[13]->Fit("f1", "Q");//*/
  
  
  for(int j = 0; j < 14; j++)
    {
      cout << "j: " << j << "\tj+1: " << j+1 << endl;
      pi0PtCanvas->cd(j+1);
      ptHist[j]->Draw("E1");
      ptHist[j]->Fit("f1", "Q");
      }//*/
  
  cout << "Histograms are filled" << endl;


  for(int i = 0; i < 14; i++)//loops though the histograms to plot them, fit them, get the yield and plot the yield in the grapg
    {
      //cout << "i: " << i << "\ti+1: " << i+1 << endl;
      
      //Getting the canvas
      pi0PtCanvas->cd(i+1);
            
      //Getting the fit parameter values
      //cout << ptHist[i]->GetFunction("f1") << endl;
      if(ptHist[i]->GetFunction("f1"))
	{
	  //cout << __FILE__ << __LINE__ << endl;
	  meanMass = ptHist[i]->GetFunction("f1")->GetParameter(3);
	  yield = ptHist[i]->GetFunction("f1")->GetParameter(2);
	  sigma = ptHist[i]->GetFunction("f1")->GetParameter(4);
	  //cout << pt[i] <<  "\tyield: " << yield << "\tmass: " << meanMass << endl;
	  if(i < 9)
	    {
	      pi0Yield->SetPoint(i,pt[i],yield);
	      pi0Yield->SetPointError(i,ptE[i],sigma);
	    }
	}
      //cout << __FILE__ << __LINE__ << endl;
      ptHist[i]->GetXaxis()->SetRangeUser(0,0.3);
      //cout << __FILE__ << __LINE__ << endl;
      //getting a line at the pi0 mass on the histogram
      gPad->Update();
      yMin = ptHist[i]->GetMinimum();
      yMax = ptHist[i]->GetMaximum();
      //cout << "yMin: " << yMin <<  "\tyMax: " << yMax << endl;
      line->SetLineStyle(1); line->SetLineColor(3); line->SetLineWidth(1);
      line->DrawLine(pi0mass,yMin,pi0mass,yield);
      line->SetLineStyle(2); line->SetLineColor(28); line->SetLineWidth(3);
      line->DrawLine(meanMass+sigma,yMin,meanMass+sigma,yMax);
      line->DrawLine(meanMass-sigma,yMin,meanMass-sigma,yMax);
      line->SetLineStyle(3);
      line->DrawLine(meanMass+1.5*sigma,yMin,meanMass+1.5*sigma,yMax);
      line->DrawLine(meanMass-1.5*sigma,yMin,meanMass-1.5*sigma,yMax);
    }//*/

  char events[150]; 
  sprintf(events, "MC: %d events", totEntries);
  cout << events << endl;
  //Makes the information box for the runs
  pi0PtCanvas->cd(16);
  TLegend *leg= new TLegend(0.1,0.1,0.9,0.9);
  leg->SetHeader("ALICE performace");
  leg->AddEntry((TObject*)0,"pp, #sqrt{s} = 2.76 TeV", "");
  leg->AddEntry((TObject*)0,"#pi^{0} #rightarrow #gamma#gamma", "");
  leg->AddEntry((TObject*)0,"#gamma's rec. with EMCal", "");
  leg->AddEntry((TObject*)0, events, "");
  leg->AddEntry(ptHist[0], "mixed evt. subtr. M_{#gamma#gamma}", "pe");
  leg->AddEntry(f1,"Fit", "l");
  leg->Draw();

  //Drawing the graph of the various yields with respective to Pt
  TCanvas *pi0Ypt= new TCanvas();
  pi0Yield->SetTitle("#pi^{0} yield: 1.40 < p_{T} < 3.00 GeV/c");
  pi0Yield->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  pi0Yield->GetYaxis()->SetTitle("Yield");
  pi0Yield->SetMarkerStyle(kFullCircle);
  pi0Yield->Draw("AP");//*/
}



/*////////////////////////////////////////////////////////////////////
Opens the files, takes the appropriate Pt slice for the mass based on the ptMin and ptMax. Rebins if specified by comining rebin numbr of bins, and returns the background subtracated invariant mass historgam
////////////////////////////////////////////////////////////////////*/
TH1D* makePtHist(TH1D* inComing, double ptMin, double ptMax, int rebin, int fileNum)
{
  if(fileNum < 0 || fileNum > 4)
    {
      cout << "number not in the cut range" << endl;
      return;
    }
  TFile *myFile = TFile::Open("GammaCalo_MC_LHC15g2_60.root");
  TList *myL = (TList*)myFile->Get("GammaCalo;1");
  
  TString cutString[5];
  cutString[0] = "00000113_1111121063032220000_0163103100000050";
  cutString[1] = "00000013_1111121063032220000_0163103100000050";
  cutString[2] = "00052013_1111121063032220000_0163103100000050";
  cutString[3] = "00083013_1111121063032220000_0163103100000050";
  cutString[4] = "00085013_1111121063032220000_0163103100000050";
  
  cout << "Cut selection: " << cutString[fileNum] << endl;

  TString folderString = "Cut Number " + cutString[fileNum];
  TList* cut_folder = (TList*)myL->FindObject(folderString);

  TString esdString = cutString[fileNum] + " ESD histograms";
  TList* esdHists = (TList*)cut_folder->FindObject(esdString);

  TH2F* hist = (TH2F*)esdHists->FindObject("ESD_Mother_InvMass_Pt");
  hist->GetXaxis()->SetTitle("M_{} (GeV/c^2)");
  hist->GetYaxis()->SetTitle("Pt (GeV/c)");

  //TCanvas* c1 = new TCanvas();
  //hist->Draw("colz");
  int ptBinMin = static_cast<int>(ptMin*10);
  int ptBinMax = static_cast<int>(ptMax*10);

  
  TH1D* pi0 = inComing;
  //gStyle->SetTitleFontSize(0.7);
  pi0->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV/c^{2})");
  pi0->GetXaxis()->SetTitleSize(0.05);
  //gStyle->SetTitleFontSize(0.5);
  pi0->GetYaxis()->SetTitle("dN_{#gamma#gamma}/dM_{#gamma#gamma}");
  pi0->GetYaxis()->SetTitleSize(0.05);
  pi0->SetMarkerStyle(33);
  
  char buffer[150]; 
  sprintf(buffer, "%.02f < p_{T} < %.02f GeV/c", ptMin, ptMax);
  pi0->SetTitle(buffer);
  //cout << "Title Size for" << buffer << "\t" << pi0->GetTitleSize() << endl;
  //pi0->SetTitleSize(0.3);
  gStyle->SetTitleFontSize(0.055);
  //cout << "Title Size for" << buffer << "\t" << pi0->GetTitleSize() << endl;
  
  TH1D* pi0WBg = hist->ProjectionX("pi0WBg",ptBinMin,ptBinMax,"");
  pi0WBg->GetYaxis()->SetTitle("dN_{#gamma#gamma}/dM_{#gamma#gamma}");
  pi0WBg->GetYaxis()->SetTitleSize(0.05);
  pi0WBg->GetXaxis()->SetTitleSize(0.05);
  pi0WBg->GetXaxis()->SetTitle("M_{#gamma#gamma} (GeV/c^{2})");
  
  totEntries += pi0WBg->GetEntries();
  cout << "Num entries: " << pi0WBg->GetEntries() << "\tcummulative: " << totEntries << endl;
  
  
  if(rebin)
    {
      pi0WBg->Rebin(rebin);
      pi0->Rebin(rebin);
    }
  pi0WBg->SetTitle("#pi^0 peak from invariant mass");
  //TCanvas* c2 = new TCanvas();
  //pi0WBg->GetXaxis()->SetRangeUser(0,0.3);
  //pi0WBg->Draw("E1");

  pi0WBg->Fit("pol1", "Q0");
  double p0 = pi0WBg->GetFunction("pol1")->GetParameter(0);
  double p1 = pi0WBg->GetFunction("pol1")->GetParameter(1);
  //cout << "p0: "<< p0 << "\t" << "p1: " << p1 << endl;

  int binContents[800] = {0};

  int totBins = pi0WBg->GetNbinsX();
  for(int i = 0; i < totBins; i++)
    {
      binContents[i] = pi0WBg->GetBinContent(i+1);
      //if(i%100 == 0)
      //cout << i+1 << "\t" << pi0Wbg->GetBinContent(i+1) << endl;
    }


  //making changes in the new hsitogram
  for(int i = 0; i < totBins; i++)
    {
      double y, x, binVal;
      x = y = binVal = 0;
      x = pi0WBg->GetBinCenter(i+1);
      y = p0 + p1*x;
      binVal = pi0WBg->GetBinContent(i+1);
      if(binVal)
	binVal = pi0WBg->GetBinContent(i+1) - y;;
      pi0->SetBinContent(i+1,binVal);
      //cout << i+1 << "\t" << binContents[i] << "\t" << pi0WBg->GetBinContent(i+1) << "\t" << pi0->GetBinContent(i+1) << endl;
    }
  //TCanvas* c3 = new TCanvas();
  //pi0->Draw();//*/
  return pi0;
}



int countEntries(TH1D* inComing, double ptMin, double ptMax, int fileNum)
{
  if(fileNum < 0 || fileNum > 4)
    {
      cout << "number not in the cut range" << endl;
      return;
    }
  TFile *myFile = TFile::Open("GammaCalo_MC_LHC15g2_60.root");
  TList *myL = (TList*)myFile->Get("GammaCalo;1");
  
  TString cutString[5];
  cutString[0] = "00000113_1111121063032220000_0163103100000050";
  cutString[1] = "00000013_1111121063032220000_0163103100000050";
  cutString[2] = "00052013_1111121063032220000_0163103100000050";
  cutString[3] = "00083013_1111121063032220000_0163103100000050";
  cutString[4] = "00085013_1111121063032220000_0163103100000050";
  
  //cout << "Cut selection: " << cutString[fileNum] << endl;
 
  TString folderString = "Cut Number " + cutString[fileNum];
  TList* cut_folder = (TList*)myL->FindObject(folderString);

  TString esdString = cutString[fileNum] + " ESD histograms";
  TList* esdHists = (TList*)cut_folder->FindObject(esdString);

  TH2F* hist = (TH2F*)esdHists->FindObject("ESD_Mother_InvMass_Pt");
  TH1D* pi0WBg = hist->ProjectionX("pi0WBg",ptBinMin,ptBinMax,"");
  int entries = pi0WBg->GetEntries();
  cout << "Num entries: " << entries << endl;
  return entries;
}
