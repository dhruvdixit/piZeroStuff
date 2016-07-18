#include <vector>
void openingFiles()
{
  TCanvas* pi0PtCanvas = new TCanvas("pi0PtCanvas","pi0PtCanvas",2000,1600);
  pi0PtCanvas->Divide(4,4);
  if(pi0PtCanvas->cd(5))
    {
      cout << "divide happened" << endl;
    }
  pi0PtCanvas->cd(1);
 
  //TCanvas *c1 = new TCanvas("c1","c1", 2000, 400);
  //c1->Divide(2,1);
  //c1->cd(1);
  gStyle->SetOptStat(0);
  gStyle->SetTitleAlign(14);
  TH1D* ptHist[16];

  ptHist[0] = new TH1D("pi0Pt1_4To1_6", "pi0Pt1_4To1_6", 800, 0, 0.8);
  ptHist[0] = static_cast<TH1D*>(makePtHist(ptHist[0], 0.8, 1.6, 0));

  ptHist[1] = new TH1D("pi0Pt1_6To1_8", "pi0Pt1_6To1_8", 800, 0, 0.8);
  ptHist[1] = static_cast<TH1D*>(makePtHist(ptHist[1], 1.6, 1.8, 0));

  ptHist[2] = new TH1D("pi0Pt1_8To2_0", "pi0Pt1_8To2_0", 800, 0, 0.8);
  ptHist[2] = static_cast<TH1D*>(makePtHist(ptHist[2], 1.8,2.0, 0));

  ptHist[3] = new TH1D("pi0Pt2_0To2_2", "pi0Pt2_0To2_2", 800, 0, 0.8);
  ptHist[3] = static_cast<TH1D*>(makePtHist(ptHist[3], 2.0, 2.2, 0));

  ptHist[4] = new TH1D("pi0Pt2_2To2_4", "pi0Pt2_2To2_4", 800, 0, 0.8);
  ptHist[4] = static_cast<TH1D*>(makePtHist(ptHist[4], 2.2, 2.4, 0));

  ptHist[5] = new TH1D("pi0Pt2_4To2_6", "pi0Pt2_4To2_6", 800, 0, 0.8);
  ptHist[5] = static_cast<TH1D*>(makePtHist(ptHist[5], 2.4, 2.6, 0));

  ptHist[6] = new TH1D("pi0Pt2_6To2_8", "pi0Pt2_6To2_8", 800, 0, 0.8);
  ptHist[6] = static_cast<TH1D*>(makePtHist(ptHist[6], 2.6, 2.8, 0));

  ptHist[7] = new TH1D("pi0Pt2_8To3_0", "pi0Pt2_8To3_0", 800, 0, 0.8);
  ptHist[7] = static_cast<TH1D*>(makePtHist(ptHist[7], 2.8, 3.0, 0));

  ptHist[8] = new TH1D("pi0Pt3_0To3_2", "pi0Pt3_0To3_2", 800, 0, 0.8);
  ptHist[8] = static_cast<TH1D*>(makePtHist(ptHist[8], 3.0, 3.2, 0));

  ptHist[9] = new TH1D("pi0Pt3_2To3_6", "pi0Pt3_2To3_6", 800, 0, 0.8);
  ptHist[9] = static_cast<TH1D*>(makePtHist(ptHist[9], 3.2, 3.6, 2));

  ptHist[10] = new TH1D("pi0Pt3_6To4_0", "pi0Pt3_6To4_0", 800, 0, 0.8);
  ptHist[10] = static_cast<TH1D*>(makePtHist(ptHist[10], 3.6, 4.0, 2));

  ptHist[11] = new TH1D("pi0Pt4_0To5_0", "pi0Pt4_0To5_0", 800, 0, 0.8);
  ptHist[11] = static_cast<TH1D*>(makePtHist(ptHist[11],4.0, 5.0, 4));

  ptHist[12] = new TH1D("pi0Pt5_0To7_0", "pi0Pt5_0To7_0", 800, 0, 0.8);
  ptHist[12] = static_cast<TH1D*>(makePtHist(ptHist[12],5.0, 7.0, 4));
  
  ptHist[13] = new TH1D("pi0Pt7_0To10_0", "pi0Pt7_0To15_0", 800, 0, 0.8);
  ptHist[13] = static_cast<TH1D*>(makePtHist(ptHist[13],7.0, 15.0, 5));

  //ptHist[15] = new TH1D("pi0Pt10_0To15_0", "pi0Pt10_0To15_0", 800, 0, 0.8);
  //ptHist[15] = static_cast<TH1D*>(makePtHist(ptHist[15],10.0, 15.0, 5));//*/
  
  double ptLow, ptHigh;
  TF1 *f1 = new TF1("f1","expo+gaus(2)",0,10);
  //f1->SetParameters(1,-0.6,1,3,0.5);
  f1->SetParameters(1,-0.01,1,0.13,0.01);
  /*pi0PtCanvas->cd(2);
  ptHist[2]->GetXaxis()->SetRangeUser(0,0.3);
  ptHist[2]->Fit("f1");
  pi0PtCanvas->cd(3);
  //ptHist[3]->GetXaxis()->SetRangeUser(0,0.3);
  ptHist[3]->Fit("f1");//
  
  for(int i = 0; i < 14; i++)
    {
      //int i = 2;
      //ptLow = 1.2 + 0.2*i;
      //ptHigh = 1.4 + 0.2*i;
      //ptHist[i] = static_cast<TH1D*>(makePtHist(ptHist[i], ptLow, ptHigh, 0));
      cout << "i+1 = " << i+1 << endl;
      pi0PtCanvas->cd(i+1);
      //c1->cd(i+1);
      cout << __FILE__ << __LINE__ << endl;
      ptHist[i]->Draw("E");
      cout << __FILE__ << __LINE__ << endl;
      ptHist[i]->Fit("f1");
      cout << __FILE__ << __LINE__ << endl;
      ptHist[i]->GetXaxis()->SetRangeUser(0,0.3);
    }//*/

  pi0PtCanvas->cd(1);
  ptHist[0]->Fit("f1");
  ptHist[0]->GetXaxis()->SetRangeUser(0,0.3);
  pi0PtCanvas->cd(2);
  ptHist[1]->Fit("f1");
  ptHist[1]->GetXaxis()->SetRangeUser(0,0.3);
  pi0PtCanvas->cd(3);
  ptHist[2]->Fit("f1");
  ptHist[2]->GetXaxis()->SetRangeUser(0,0.3);
  pi0PtCanvas->cd(4);
  ptHist[3]->Fit("f1");
  ptHist[3]->GetXaxis()->SetRangeUser(0,0.3);
  pi0PtCanvas->cd(5);
  ptHist[4]->Fit("f1");
  ptHist[4]->GetXaxis()->SetRangeUser(0,0.3);
  
  pi0PtCanvas->cd(6);
  ptHist[5]->Fit("f1");
  ptHist[5]->GetXaxis()->SetRangeUser(0,0.3);
  pi0PtCanvas->cd(7);
  ptHist[6]->Fit("f1");
  ptHist[6]->GetXaxis()->SetRangeUser(0,0.3);
  pi0PtCanvas->cd(8);
  ptHist[7]->Fit("f1");
  ptHist[7]->GetXaxis()->SetRangeUser(0,0.3);
  pi0PtCanvas->cd(9);
  ptHist[8]->Fit("f1");
  ptHist[8]->GetXaxis()->SetRangeUser(0,0.3);//*/
  /*pi0PtCanvas->cd(10);
  ptHist[9]->Fit("f1");
  ptHist[9]->GetXaxis()->SetRangeUser(0,0.3);*/

  pi0PtCanvas->cd(11);
  ptHist[10]->Draw();
  ptHist[10]->Fit("f1");
  ptHist[10]->GetXaxis()->SetRangeUser(0,0.3);
  pi0PtCanvas->cd(12);
  ptHist[11]->Fit("f1");
  ptHist[11]->GetXaxis()->SetRangeUser(0,0.3);
  /*pi0PtCanvas->cd(13);
  ptHist[12]->Fit("f1");
  ptHist[12]->GetXaxis()->SetRangeUser(0,0.3);//
  pi0PtCanvas->cd(14);
  ptHist[13]->Fit("f1");
  ptHist[13]->GetXaxis()->SetRangeUser(0,0.3);//*/
  //pi0PtCanvas->cd(15);
  //ptHist[14]->Fit("f1");
  //ptHist[14]->GetXaxis()->SetRangeUser(0,0.3);
}

TH1D* makePtHist(TH1D* inComing, double ptMin, double ptMax, int rebin)
{
  TFile *myFile = TFile::Open("GammaCalo_LHC13g-pass1_60.root");
  TList *myL = (TList*)myFile->Get("GammaCalo;1");
  TList* cut_folder = (TList*)myL->FindObject("Cut Number 00000113_1111121063032220000_0163103100000050");
  TList* esdHists = (TList*)cut_folder->FindObject("00000113_1111121063032220000_0163103100000050 ESD histograms");
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
  
  if(rebin)
    {
      pi0WBg->Rebin(rebin);
      pi0->Rebin(rebin);
    }
  pi0WBg->SetTitle("#pi^0 peak from invariant mass");
  //TCanvas* c2 = new TCanvas();
  //pi0WBg->GetXaxis()->SetRangeUser(0,0.3);
  //pi0WBg->Draw("E");

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

  //insertion sort
  double tmpVal = 0;
  int tmp = 0;;
  for(int i = 1; i < totBins; i++)
    {
      tmp = i;
      tmpVal = binContents[i];
      while (tmp > 0 && tmpVal < binContents[tmp-1])
	{
	  binContents[tmp] = binContents[tmp-1];
	  tmp--;
	}
      binContents[tmp] = tmpVal;
    }

  //background subtraction


  double median = 0;
  //finding the median
  //if(!(totBins%2))
  //{
  //  int half = totBins/2;
  //  median = (binContents[half] + binContents[half+1])/2;
  //}
  //cout << "My median is: " << median << endl;

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

//Double_t fitF(Double_t *
