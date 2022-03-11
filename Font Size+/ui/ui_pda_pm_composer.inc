		<Page
			Location='14,330'
			MinimumSize='300,336'
			Name='PMComposer'
			OnDisableEffector='/Effectors.FadeThreeQuarter'
			OnEnableEffector='/Effectors.FadeFull'
			RStyleDefault='rs_default'
			ScrollExtent='445,336'
			Size='445,336'
			UserMovable='true'
			UserResizable='true'
			Visible='false'
			VisualEditLock='true'
		>
			<Data
				buttonclose='bg.mmc.close'
				checkPopUpHelp='checkPopUpHelp'
				Name='CodeData'
				PopupHelp='PopUpHelp'
				textbody='main.bottom.comp.body.text'
				textboxrecepient='main.top.textboxRecipient'
				textboxsubject='main.top.textboxSubject'
				textmaxreached='main.bottom.textmaxreached'
				volumeAttach='main.bottom.comp.attach.volume'
			/>
			<Checkbox
				Alignment='Right'
				Color='#96F4FC'
				Location='320,7'
				MinimumSize='0,19'
				Name='checkPopupHelp'
				PackLocation='fff,nfn'
				PackSize='f,f'
				PalColor='text1'
				ScrollExtent='108,19'
				Size='108,19'
				Style='/Styles.New.Checkbox.Style2'
			>@show_help</Checkbox>
			<DataSource
				Name='PopupHelp'
			>
				<Data
					LocalText='[@ui_pm:help_comp_recipient]'
					Name='0'
					Text='@ui_pm:help_comp_recipient'
					widget='main.top.textboxRecipient'
				/>
				<Data
					LocalText='[@ui_pm:help_comp_subject]'
					Name='1'
					Text='@ui_pm:help_comp_subject'
					widget='main.top.textboxSubject'
				/>
				<Data
					LocalText='[@ui_pm:help_comp_body]'
					Name='2'
					Text='@ui_pm:help_comp_body'
					widget='main.bottom.comp.body.text'
				/>
				<Data
					DesiredPosition='ne'
					LocalText='[@ui_pm:help_comp_attach]'
					Name='3'
					Text='@ui_pm:help_comp_attach'
					widget='main.bottom.comp.attach'
				/>
				<Data
					DesiredPosition='ne'
					LocalText='[@ui_pm:help_comp_send]'
					Name='4'
					Text='@ui_pm:help_comp_send'
					widget='buttonOK'
				/>
			</DataSource>
			<Button
				BackgroundOpacity='0.80'
				IsDefaultButton='true'
				LocalText='[@ui_pm:send]'
				Location='290,310'
				MinimumSize='0,19'
				Name='buttonOk'
				PackLocation='fff,fff'
				PackSize='p,f'
				ScrollExtent='139,19'
				Size='139,19'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@ui_pm:send</Button>
			<Button
				BackgroundOpacity='0.80'
				LocalText='[@cancel]'
				Location='15,310'
				MinimumSize='0,19'
				Name='buttonCancel'
				PackLocation='nfn,fff'
				PackSize='p,f'
				ScrollExtent='139,19'
				Size='139,19'
				Style='/Styles.New.buttons.hud.style'
				TextColor='#000000'
			>@cancel</Button>
			<Page
				Location='7,25'
				Name='main'
				PackSize='a,a'
				RStyleDefault='rs_default'
				ScrollExtent='430,280'
				Selectable='true'
				Size='430,280'
			>
				<Page
					Location='2,2'
					Name='top'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					RStyleDefault='rs_default'
					ScrollExtent='428,114'
					Size='428,114'
				>
					<Textbox
						Font='bold_13'
						Location='10,26'
						MaxLength='100'
						Name='textboxRecipient'
						PackLocation='nfn,nfn'
						PackSize='a,h'
						PalText='text1'
						RStyleDefault='/Styles.New.whiteOutline.rs_default'
						RStyleDisabled='/Styles.New.blackbox.rs_default'
						ScrollExtent='407,30'
						selected='true'
						Size='407,30'
						Style='/Styles.textbox.default.Style_16'
					></Textbox>
					<Textbox
						Font='bold_13'
						IME='true'
						Location='10,79'
						MaxLength='100'
						Name='textboxSubject'
						PackLocation='nfn,nfn'
						PackSize='a,h'
						PalText='text1'
						RStyleDefault='/Styles.New.whiteOutline.rs_default'
						RStyleDisabled='/Styles.New.blackbox.rs_default'
						ScrollExtent='407,28'
						selected='true'
						Size='407,28'
						Style='/Styles.textbox.default.Style_16'
					></Textbox>
					<Text
						Enabled='false'
						Font='bold_13'
						LocalText='[@ui_pm:recipient_name]'
						Location='5,4'
						MaxLines='1'
						MinimumSize='0,19'
						Name='text'
						PackLocation='nfn,nfn'
						PackSize='p,f'
						PalText='header'
						ScrollExtent='260,19'
						Size='260,19'
						TextColor='#97FFFF'
					>@ui_pm:recipient_name</Text>
					<Text
						Enabled='false'
						Font='bold_13'
						LocalText='[@ui_pm:subject]'
						Location='5,58'
						MaxLines='1'
						MinimumSize='0,19'
						Name='text'
						PackLocation='nfn,nfn'
						PackSize='p,f'
						PalText='header'
						ScrollExtent='260,19'
						Size='260,19'
						TextColor='#97FFFF'
					>@ui_pm:subject</Text>
					<Page
						BackgroundOpacity='0.80'
						BackgroundTint='#00FFFF'
						Location='7,24'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,h'
						PalBgTint='line2'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='413,33'
						Size='413,33'
					>
						<Page
							BackgroundOpacity='0.60'
							BackgroundTint='#03546B'
							Location='2,2'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,h'
							PalBgTint='back3'
							RStyleDefault='/Styles.New.whitebox_palW.rs_default'
							ScrollExtent='409,29'
							Size='409,29'
						/>
					</Page>
					<Page
						BackgroundOpacity='0.80'
						BackgroundTint='#00FFFF'
						Location='7,76'
						Name='box'
						PackLocation='nfn,nfn'
						PackSize='a,h'
						PalBgTint='line2'
						RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
						ScrollExtent='413,33'
						Size='413,33'
					>
						<Page
							BackgroundOpacity='0.60'
							BackgroundTint='#03546B'
							Location='2,2'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,h'
							PalBgTint='back3'
							RStyleDefault='/Styles.New.whitebox_palW.rs_default'
							ScrollExtent='409,29'
							Size='409,29'
						/>
					</Page>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Name='bg'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						RStyleDefault='/Styles.New.skinnyInside.rs_default'
						ScrollExtent='428,114'
						Size='428,114'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.70'
							BackgroundTint='#1CFFFF'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,p'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='428,114'
							Size='428,114'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.70'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline'
								PackLocation='nfn,nfn'
								PackSize='a,p'
								PalBgTint='line1'
								RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
								ScrollExtent='428,114'
								Size='428,114'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.40'
								BackgroundTint='#00D6FB'
								Enabled='false'
								Location='2,2'
								Name='box'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='back1'
								RStyleDefault='/Styles.New.pill_lrg.rs_default'
								ScrollExtent='425,111'
								Size='425,111'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.50'
								BackgroundTint='#00D6FB'
								Location='2,2'
								Name='inFrame'
								PackLocation='nfn,nfn'
								PackSize='a,p'
								PalBgTint='back1'
								RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
								ScrollExtent='424,111'
								Size='424,111'
							/>
						</Page>
					</Page>
				</Page>
				<Page
					Location='0,112'
					Name='bottom'
					PackLocation='nfn,fff'
					PackSize='a,a'
					RStyleDefault='rs_default'
					ScrollExtent='430,165'
					Size='430,165'
				>
					<Composite
						Location='5,30'
						Name='comp'
						Orientation='Horizontal'
						PackLocation='a,a'
						PackSize='a,a'
						ScrollExtent='420,135'
						Size='420,135'
						Spacing='4'
						SpacingType='Fill'
					>
						<Page
							Name='body'
							PackSize='f,a'
							ScrollExtent='312,129'
							Size='312,129'
						>
							<Text
								BackgroundColor='#FFFFFF'
								BackgroundScrolls='false'
								CursorMark='28'
								CursorPoint='28'
								Font='default_13'
								GetsInput='true'
								IME='true'
								LocalText='xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
'
								Location='6,7'
								Margin='2,2,2,2'
								Name='text'
								PackSize='a,a'
								PalText='text1'
								RStyleDefault='/Styles.New.whitebox.rs_default'
								ScrollExtent='286,173'
								Size='286,118'
								TextColor='#96F4FC'
							>xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
</Text>
							<Scrollbar
								AutoVisibility='true'
								Control='text'
								Location='297,6'
								Name='Scroll'
								PackLocation='fff,nfn'
								PackSize='f,a'
								ScrollExtent='11,118'
								Size='11,118'
								Style='/Styles.scrollbar.default.vHud4.style'
							>
							</Scrollbar>
							<Page
								BackgroundOpacity='0.70'
								BackgroundTint='#00FFFF'
								GetsInput='false'
								Name='outline'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line2'
								RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
								ScrollExtent='312,129'
								Size='312,129'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.70'
								BackgroundTint='#03546B'
								Location='4,6'
								Name='box'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='back3'
								RStyleDefault='/Styles.New.whitebox_palW.rs_default'
								ScrollExtent='293,121'
								Size='293,121'
							/>
						</Page>
						<Page
							Location='316,0'
							MaximumSize='104,16384'
							MinimumSize='104,0'
							Name='attach'
							OnHide='parent.pack=t'
							OnShow='parent.pack=t'
							PackSize='f,a'
							ScrollExtent='104,129'
							Size='104,129'
						>
							<VolumePage
								BackgroundScrolls='false'
								CellCount='1,2'
								CellSize='64,64'
								DragAccepts='GameObject'
								Location='5,22'
								MinimumScrollExtent='68,134'
								Name='volume'
								OnHide='parent.visible=visible'
								OnShow='parent.visible=visible'
								PackSize='a,a'
								RStyleDefault='/Styles.New.whitebox.rs_default'
								ScrollExtent='85,134'
								Size='85,99'
							>
								<Text
									Activated='true'
									BackgroundColor='#FFFFFF'
									BackgroundTint='#008080'
									Enabled='false'
									Font='bold_13'
									LocalText='xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
'
									Location='2,2'
									Margin='2,2,2,2'
									MaximumSize='64,64'
									MinimumSize='64,64'
									Name='text'
									PalText='text1'
									RStyleDefault='rs_default'
									ScrollExtent='64,172'
									Size='64,64'
									TextColor='#96F4FC'
								>xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
</Text>
								<Text
									BackgroundColor='#FFFFFF'
									BackgroundTint='#008080'
									Enabled='false'
									Font='bold_13'
									LocalText='xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
'
									Location='2,68'
									Margin='2,2,2,2'
									MaximumSize='64,64'
									MinimumSize='64,64'
									Name='text'
									PalText='text1'
									RStyleDefault='rs_default'
									ScrollExtent='64,172'
									Size='64,64'
									TextColor='#96F4FC'
								>xxx
LINE ONE
LINE TWO
LINE THREE
LINE FOUR
LINE FIVE
LINE SIX
LINE SEVEN
LINE EIGHT
LINE NINE
LINE TEN
LINE ELEVEN
</Text>
							</VolumePage>
							<Text
								Font='bold_13'
								LocalText='[@ui_pm:attachments]'
								MinimumSize='0,19'
								Name='label'
								PackSize='a'
								PalText='header'
								ScrollExtent='103,24'
								Size='103,19'
								TextColor='#97FFFF'
							>@ui_pm:attachments</Text>
							<Scrollbar
								AutoVisibility='true'
								Control='volume'
								Location='90,19'
								Name='Scroll'
								PackLocation='fff,nfn'
								PackSize='f,a'
								ScrollExtent='11,104'
								Size='11,104'
								Style='/Styles.scrollbar.default.vHud4.style'
							>
							</Scrollbar>
							<Page
								BackgroundOpacity='0.80'
								BackgroundTint='#00FFFF'
								GetsInput='false'
								Location='0,14'
								Name='outline'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='line2'
								RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
								ScrollExtent='104,115'
								Size='104,115'
							/>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='0.70'
								BackgroundTint='#03546B'
								Location='3,19'
								Name='box'
								PackLocation='nfn,nfn'
								PackSize='a,a'
								PalBgTint='back3'
								RStyleDefault='/Styles.New.whitebox_palW.rs_default'
								ScrollExtent='88,105'
								Size='88,105'
							/>
						</Page>
					</Composite>
					<Page
						BackgroundColor='#FFFFFF'
						BackgroundTint='#1CFFFF'
						Location='0,25'
						Name='bg_list'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='line1'
						ScrollExtent='430,140'
						Size='430,140'
					>
						<Page
							BackgroundOpacity='0.90'
							BackgroundTint='#1CFFFF'
							GetsInput='false'
							Name='outline'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='line1'
							RStyleDefault='/Styles.New.whiteOutline_palW.rs_default'
							ScrollExtent='430,140'
							Size='430,140'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.40'
							BackgroundTint='#00D6FB'
							Enabled='false'
							Location='2,2'
							Name='box'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.pill_lrg.rs_default'
							ScrollExtent='427,138'
							Size='427,138'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='0.50'
							BackgroundTint='#00D6FB'
							Location='0,4'
							Name='inFrame'
							PackLocation='nfn,nfn'
							PackSize='a,a'
							PalBgTint='back1'
							RStyleDefault='/Styles.New.fatFrameInside_palW.rs_default'
							ScrollExtent='427,136'
							Size='427,136'
						/>
					</Page>
					<Text
						Enabled='false'
						Font='bold_13'
						LocalText='[@ui_pm:text]'
						Location='0,5'
						MaxLines='1'
						MinimumSize='0,19'
						Name='text'
						PackLocation='nfn,nfn'
						PackSize='p,f'
						PalText='header'
						ScrollExtent='152,19'
						Size='152,19'
						TextColor='#97FFFF'
					>@ui_pm:text</Text>
					<Text
						Enabled='false'
						Font='bold_13'
						LocalText='[@ui_pm:text_max]'
						Location='170,5'
						MaxLines='1'
						MinimumSize='0,19'
						Name='textmaxreached'
						PackLocation='nfn,nfn'
						PackSize='p,f'
						PalText='header'
						ScrollExtent='258,19'
						Size='258,19'
						TextColor='#97FFFF'
					>@ui_pm:text_max</Text>
				</Page>
			</Page>
			<Page
				Name='bg'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='445,336'
				Size='445,336'
			>
				<Page
					Location='434,8'
					Name='mmc'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.thin_mmc.rs_default'
					ScrollExtent='12,10'
					Size='12,10'
				>
					<Button
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.80'
						IsCancelButton='true'
						Location='-3,-3'
						Name='close'
						PackLocation='fff,cfc'
						PackSize='f,f'
						ScrollExtent='16,16'
						Size='16,16'
						Style='/Styles.Frame.buttonClose.style'
					></Button>
				</Page>
				<Page
					MinimumSize='0,19'
					Name='caption'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='297,19'
					Size='297,19'
				>
					<Text
						Enabled='false'
						Font='bold_13'
						LocalText='[@UI_PM:CPT_COMPOSER]'
						Margin='6,-2,0,0'
						MaxLines='1'
						MinimumSize='0,19'
						Name='text'
						PackSize='a,f'
						PalText='titletext'
						ScrollExtent='297,19'
						Size='297,19'
						TextAlignmentVertical='Center'
						TextCapital='true'
						TextColor='#00354F'
					>@ui_pm:cpt_composer</Text>
				</Page>
				<Page
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='1,0'
					Name='frame'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='baselight'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='444,336'
					Selectable='true'
					Size='444,336'
				>
					<Page
						BackgroundColor='#FFFFFF'
						GetsInput='false'
						Location='1,0'
						Name='lines'
						PackSize='a,a'
						RStyleDefault='/Styles.space.boxes.generic4.rs_default'
						ScrollExtent='444,336'
						Size='444,336'
					>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='0,314'
							Name='outlineBL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,fff'
							PackSize='p,f'
							ScrollExtent='349,22'
							Size='349,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,13'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlinebottomLeft2.rs_default'
								ScrollExtent='349,9'
								Size='349,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='122,314'
							Name='outlineBR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,fff'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='322,22'
							Size='322,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Location='0,13'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlinebottomRight2.rs_default'
								ScrollExtent='322,9'
								Size='322,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Location='122,0'
							Name='outlineTR'
							OpacityRelativeMin='0.80'
							PackLocation='fff,nfn'
							PackSize='p,f'
							ScrollExtent='322,22'
							Size='322,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlineTopRight2.rs_default'
								ScrollExtent='322,9'
								Size='322,9'
							/>
						</Page>
						<Page
							BackgroundColor='#FFFFFF'
							GetsInput='false'
							Name='outlineTL'
							OpacityRelativeMin='0.80'
							PackLocation='nfn,nfn'
							PackSize='p,f'
							RStyleDefault='/Styles.space.boxes.boxlineTopLeft.rs_default'
							ScrollExtent='349,22'
							Size='349,22'
						>
							<Page
								BackgroundColor='#FFFFFF'
								BackgroundOpacity='1.00'
								BackgroundTint='#1CFFFF'
								GetsInput='false'
								Name='outline1'
								OpacityRelativeMin='0.80'
								PackSize='a,a'
								PalBgTint='line1'
								RStyleDefault='/Styles.space.boxes.boxlineTopLeft2.rs_default'
								ScrollExtent='349,9'
								Size='349,9'
							/>
						</Page>
					</Page>
					<Page
						BackgroundOpacity='1.00'
						Location='-1,0'
						Name='top'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_TR.rs_default'
						ScrollExtent='445,29'
						Size='445,29'
					/>
					<Page
						BackgroundOpacity='1.00'
						Location='0,313'
						Name='bottom'
						PackLocation='nfn,fff'
						PackSize='a,f'
						RStyleDefault='/Styles.New.main_BR.rs_default'
						ScrollExtent='444,23'
						Size='444,23'
					/>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Location='0,5'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.New.thin_in.rs_default'
					ScrollExtent='445,328'
					Selectable='true'
					Size='445,328'
				/>
				<Page
					BackgroundOpacity='1.00'
					BackgroundTint='#00D6FB'
					GetsInput='false'
					Name='back'
					PackLocation='nfn,nfn'
					PackSize='a,a'
					PalBgTint='back1'
					RStyleDefault='/Styles.space.spaceglow.rs_default'
					ScrollExtent='445,336'
					Selectable='true'
					Size='445,336'
				/>
			</Page>
		</Page>