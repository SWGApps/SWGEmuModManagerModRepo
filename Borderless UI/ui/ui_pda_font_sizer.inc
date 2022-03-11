<Page Location='346,369'
      MaximumSize='373,158'
      MinimumSize='228,120'
      Name='FontSizer'
      RStyleDefault='rs_default'
      ScrollExtent='273,125'
      Size='273,125'
      UserMovable='true'
      UserResizable='true'
      Visible='false'>
	<Data buttonCancel='buttonCancel'
	      buttonOk='buttonOk'
	      Name='CodeData'
	      slider='inner.slider'
	      textSample='inner.sample'/>
	<Button BackgroundOpacity='0.90'
	        IsCancelButton='true'
	        LocalText='[@cancel]'
	        Location='16,98'
	        MinimumSize='0,19'
	        Name='buttonCancel'
	        PackLocation='nfn,fff'
	        PackSize='p,f'
	        ScrollExtent='80,19'
	        Size='80,19'
	        Style='/Styles.New.buttons.hud.style'
	        TextColor='#000000'>@cancel</Button>
	<Button BackgroundOpacity='0.90'
	        IsDefaultButton='true'
	        LocalText='[@ok]'
	        Location='177,98'
	        MinimumSize='0,19'
	        Name='buttonOk'
	        PackLocation='fff,fff'
	        PackSize='p,f'
	        ScrollExtent='80,19'
	        Size='80,19'
	        Style='/Styles.New.buttons.hud.style'
	        TextColor='#000000'>@ok</Button>
	<Page BackgroundColor='#FFFFFF'
	      Location='8,24'
	      Name='inner'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      RStyleDefault='rs_default'
	      ScrollExtent='256,70'
	      Selectable='true'
	      Size='256,70'>
		<Text Font='bold_20'
		      LocalText='[@sample_text]'
		      Location='3,13'
		      Name='sample'
		      PackLocation='cpc,cpc'
		      PackSize='a,p'
		      PalText='text1'
		      RStyleDefault='rs_default'
		      ScrollExtent='250,30'
		      Size='250,30'
		      TextAlignment='Center'
		      TextAlignmentVertical='Center'
		      TextColor='#96F4FC'>@sample_text</Text>
		<Sliderbar Location='21,43'
		           Name='slider'
		           OnDisable='visible=false'
		           OnEnable='visible=true'
		           PackLocation='cpc,cpc'
		           PackSize='a,f'
		           ScrollExtent='214,14'
		           Size='214,14'
		           Style='/Styles.New.Slider.default.horizontal.style_test'
		           UpperLimit='100'/>
		<Page GetsInput='false'
		      Name='outline'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      ScrollExtent='256,70'
		      Selectable='true'
		      Size='256,70'>
			<Page BackgroundColor='#FFFFFF'
			      BackgroundOpacity='0.70'
			      BackgroundTint='#00FFFF'
			      Name='outline'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='line2'
			      RStyleDefault='/Styles.New.whiteOutline.rs_default'
			      ScrollExtent='256,70'
			      Size='256,70'/>
			<Page BackgroundColor='#FFFFFF'
			      BackgroundOpacity='0.40'
			      BackgroundTint='#00D6FB'
			      Location='7,9'
			      Name='box'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='back1'
			      RStyleDefault='/Styles.New.whitebox_palW.rs_default'
			      ScrollExtent='241,52'
			      Size='241,52'/>
			<Page BackgroundColor='#FFFFFF'
			      BackgroundOpacity='0.40'
			      BackgroundTint='#01687E'
			      Location='3,3'
			      Name='inFrame'
			      PackLocation='nfn,nfn'
			      PackSize='a,a'
			      PalBgTint='back2'
			      RStyleDefault='/Styles.New.pill_lrg.rs_default'
			      ScrollExtent='250,64'
			      Size='250,64'/>
		</Page>
	</Page>
	<Page Name='bg'
	      PackLocation='nfn,nfn'
	      PackSize='a,a'
	      ScrollExtent='273,125'
	      Size='273,125'>
		<Page Location='242,8'
		      Name='mmc'
		      PackLocation='fff,nfn'
		      PackSize='f,f'
		      RStyleDefault='/Styles.New.thin_mmc.rs_default'
		      ScrollExtent='12,12'
		      Size='12,12'>
			<Button BackgroundColor='#FFFFFF'
			        BackgroundOpacity='0.80'
			        IsCancelButton='true'
			        Location='-3,-3'
			        Name='close'
			        PackLocation='fff,cfc'
			        PackSize='f,f'
			        ScrollExtent='16,16'
			        Size='16,16'
			        Style='/Styles.Frame.buttonClose.style'/>
		</Page>
		<Page MinimumSize='0,19'
		      Name='caption'
		      PackLocation='nfn,nfn'
		      PackSize='a,f'
		      ScrollExtent='127,19'
		      Size='127,19'>
			<Text Enabled='false'
			      Font='bold_12'
			      LocalText='[@CPT_FONT_SIZER]'
			      Margin='6,-2,0,0'
			      MaxLines='1'
			      MinimumSize='0,19'
			      Name='text'
			      PackSize='a,f'
			      PalText='titletext'
			      ScrollExtent='127,19'
			      Size='127,19'
			      TextAlignmentVertical='Center'
			      TextCapital='true'
			      TextColor='#00354F'>@cpt_font_sizer</Text>
		</Page>
		<Page BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Location='1,0'
		      Name='frame'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='baselight'
		      RStyleDefault='/Styles.New.thin_in.rs_default'
		      ScrollExtent='272,125'
		      Selectable='true'
		      Size='272,125'>
			<Page BackgroundColor='#FFFFFF'
			      GetsInput='false'
			      Location='1,0'
			      Name='lines'
			      PackSize='a,a'
			      RStyleDefault='/Styles.space.boxes.generic4.rs_default'
			      ScrollExtent='272,125'
			      Size='272,125'>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='0,103'
				      Name='outlineBL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,fff'
				      PackSize='p,f'
				      ScrollExtent='213,22'
				      Size='213,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='76,103'
				      Name='outlineBR'
				      OpacityRelativeMin='0.80'
				      PackLocation='fff,fff'
				      PackSize='p,f'
				      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
				      ScrollExtent='196,22'
				      Size='196,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Location='76,0'
				      Name='outlineTR'
				      OpacityRelativeMin='0.80'
				      PackLocation='fff,nfn'
				      PackSize='p,f'
				      ScrollExtent='196,22'
				      Size='196,22'>
					
				</Page>
				<Page BackgroundColor='#FFFFFF'
				      GetsInput='false'
				      Name='outlineTL'
				      OpacityRelativeMin='0.80'
				      PackLocation='nfn,nfn'
				      PackSize='p,f'
				      RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
				      ScrollExtent='213,22'
				      Size='213,22'>
					
				</Page>
			</Page>

		</Page>
		<Page BackgroundOpacity='1.00'
		      BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Location='0,5'
		      Name='back'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.New.thin_in.rs_default'
		      ScrollExtent='273,117'
		      Selectable='true'
		      Size='273,117'/>
		<Page BackgroundOpacity='0.80'
		      BackgroundTint='#00D6FB'
		      GetsInput='false'
		      Name='back'
		      PackLocation='nfn,nfn'
		      PackSize='a,a'
		      PalBgTint='back1'
		      RStyleDefault='/Styles.space.spaceglow.rs_default'
		      ScrollExtent='273,125'
		      Selectable='true'
		      Size='273,125'/>
	</Page>
</Page>