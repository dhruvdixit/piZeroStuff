{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Feb 26 13:23:45 2016) by ROOT version5.34/30
   TCanvas *c1 = new TCanvas("c1", "c1",537,366,700,500);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(0.95,-5.033261,3.65,45.29934);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(9);
   gre->SetName("");
   gre->SetTitle("#pi^{0} yield: 1.40 < p_{T} < 3.00 GeV/c");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,1.5,0.3976323);
   gre->SetPointError(0,0.1,-0.01399093);
   gre->SetPoint(1,1.7,2.565127);
   gre->SetPointError(1,0.1,-0.005768243);
   gre->SetPoint(2,1.9,2.256491);
   gre->SetPointError(2,0.1,-0.01608989);
   gre->SetPoint(3,2.1,5.033366);
   gre->SetPointError(3,0.1,-0.01119712);
   gre->SetPoint(4,2.3,6.884175);
   gre->SetPointError(4,0.1,-0.008309383);
   gre->SetPoint(5,2.5,10.20953);
   gre->SetPointError(5,0.1,-0.008605615);
   gre->SetPoint(6,2.7,14.42808);
   gre->SetPointError(6,0.1,-0.01137745);
   gre->SetPoint(7,2.9,24.04776);
   gre->SetPointError(7,0.1,-0.01070068);
   gre->SetPoint(8,3.1,36.64168);
   gre->SetPointError(8,0.1,-0.009064461);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","#pi^{0} yield: 1.40 < p_{T} < 3.00 GeV/c",100,1.22,3.38);
   Graph_Graph1->SetMinimum(0);
   Graph_Graph1->SetMaximum(40.26608);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("Yield");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(-0.09999999,0.9345,0.7,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("#pi^{0} yield: 1.40 < p_{T} < 3.00 GeV/c");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
