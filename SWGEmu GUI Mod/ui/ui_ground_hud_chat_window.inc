		<Page
			BackgroundColor='#22FF22'
			DragAccepts='Command'
			Location='-62,621'
			MinimumSize='312,151'
			Name='ChatWindow'
			PackLocation='nfn,fff'
			PackSize='f,f'
			ScrollExtent='523,145'
			Size='523,145'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
			UserResizable='true'
		>
			<Data
				buttonclose='close'
				buttoncollapse='persistent.buttons.collapse'
				buttonexpand='persistent.buttons.expand'
				collapsingpage='collapsing'
				iconblink='/styles.icon.misc.blink'
				iconnoblink='/styles.icon.misc.no_blink'
				input='persistent.body.input'
				Name='CodeData'
				output='collapsing.text'
				persistentpage='persistent'
				StickyVisible='true'
				tabs='collapsing.tabs'
				textchannel='persistent.body.textchannel'
			/>
			<Button
				AutoRegister='true'
				BackgroundColor='#FFFFFF'
				Color='#000000'
				ContextToParent='true'
				DragType='uicommand'
				IconShrink='true'
				Location='9,3'
				MaximumSize='16,16'
				MinimumSize='16,16'
				Name='close'
				PackLocation='nnn,nnn'
				PackSize='f,f'
				ScrollExtent='16,16'
				Selectable='true'
				Size='16,16'
				Style='/Styles.Frame.buttonCloseDark.style'
			></Button>
			<Page
				DropToParent='true'
				floater.enabled='true'
				MinimumSize='256,77'
				Name='collapsing'
				PackSize='a,a'
				ScrollExtent='523,105'
				Size='523,105'
			>
			<Scrollbar
				AutoRegister='true'
				BackgroundColor='#FFFFFF'
				BackgroundOpacity='0.10'
				BackgroundTint='#42FF00'
				Control='text'
				Enabled='false'
				Location='500,28'
				MaximumSize='38,16384'
				MinimumSize='19,0'
				Name='text_sroll'
				Opacity='1.00'
				OpacityRelativeMin='-1'
				PackLocation='fff,nfn'
				PackSize='f,a'
				ScrollExtent='19,79'
				Size='19,79'
				Style='/Styles.scrollbar.default.vHud4.style'
			>
			</Scrollbar>
				<Page
					BackgroundOpacity='1.00'
					GetsInput='false'
					Location='1,10'
					Name='corner_TL'
					OnDisable='opacity=0'
					OnDisableEffector='/effectors.opacity.fast.fadeout'
					OnEnableEffector='/effectors.opacity.fast.fadefull'
					Opacity='0.00'
					OpacityRelativeMin='0.00'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					RStyleDefault='/Styles.New.corner_chatTL.rs_default'
					ScrollExtent='40,41'
					Size='40,41'
					Visible='false'
				/>
					<Image
						Location='0,0'
						MaximumSize='211,88'
						MinimumSize='211,88'
						Name='left'
						OnDisable='opacity=0'
						OnDisableEffector='/effectors.opacity.fast.fadeout'
						OnEnableEffector='/effectors.opacity.fast.fadefull'
						OpacityRelativeMin='-1'
						PackSize='f,f'
						ScrollExtent='211,88'
						Size='211,88'
						SourceRect='0,0,211,88'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
					<Image
						MaximumSize='16384,86'
						MinimumSize='0,86'
						Location='0,3'
						Name='filltop'
						OnDisable='opacity=0'
						OnDisableEffector='/effectors.opacity.fast.fadeout'
						OnEnableEffector='/effectors.opacity.fast.fadefull'
						OpacityRelativeMin='-1'
						PackSize='absolute,absolute'
						ScrollExtent='420,86'
						Size='420,86'
						SourceRect='339,0,346,100'
						SourceResource='hud_ground_skin'
					/>
					<Image
						Location='418,0'
						MaximumSize='101,88'
						MinimumSize='101,88'
						Name='right'
						OnDisable='opacity=0'
						OnDisableEffector='/effectors.opacity.fast.fadeout'
						OnEnableEffector='/effectors.opacity.fast.fadefull'
						OpacityRelativeMin='-1'
						PackLocation='fff,nfn'
						PackSize='f,f'
						ScrollExtent='101,88'
						Size='101,88'
						SourceRect='211,0,312,88'
						SourceResource='hud_ground_skin'
					/>
					<Image
						MaximumSize='14,16384'
						MinimumSize='14,0'
						Location='0,10'
						Name='fillleft'
						OnDisable='opacity=0'
						OnDisableEffector='/effectors.opacity.fast.fadeout'
						OnEnableEffector='/effectors.opacity.fast.fadefull'
						OpacityRelativeMin='-1'
						PackSize='absolute,absolute'
						ScrollExtent='14,410'
						Size='14,410'
						SourceRect='0,164,14,173'
						SourceResource='hud_ground_skin'
					/>
					<Image
						MaximumSize='18,16384'
						MinimumSize='18,0'
						Location='500,30'
						Name='fillright'
						OnDisable='opacity=0'
						OnDisableEffector='/effectors.opacity.fast.fadeout'
						OnEnableEffector='/effectors.opacity.fast.fadefull'
						OpacityRelativeMin='-1'
						PackLocation='fff,nfn'
						PackSize='absolute,absolute'
						ScrollExtent='18,410'
						Size='18,410'
						SourceRect='294,164,311,173'
						SourceResource='hud_ground_skin'
					/>
			<Text
				BackgroundOpacity='1.00'
				ContextCapable='true'
				CursorMark='149'
				CursorPoint='149'
				DragAccepts='ChatTab'
				DropToParent='true'
				Font='normal_12'
				GetsInput='true'
				LocalText=''
				Location='14,26'
				Margin='2,2,2,2'
				Name='text'
				Opacity='0.80'
				OpacityRelativeMin='0.02'
				PackSize='a,a'
				PalText='text1'
				ScrollExtent='495,79'
				Size='495,79'
				TextColor='#96F4FC'
				TextOpacityRelativeApply='true'
				TextOpacityRelativeMin='0.60'
				TextSelectable='true'
			></Text>
				<Page
					AbsorbsInput='false'
					DropToParent='true'
					Location='475,10'
					Name='mmc'
					OpacityRelativeMin='0.50'
					PackLocation='fff,nfn'
					PackSize='f,f'
					ScrollExtent='48,45'
					Size='48,45'
				>
					<Page
						AbsorbsInput='false'
						BackgroundOpacity='1.00'
						DropToParent='true'
						Location='9,0'
						Name='metal'
						PackLocation='fff,nfn'
						PackSize='f,f'
						RStyleDefault='/Styles.New.corner_chatTR.rs_default'
						ScrollExtent='39,43'
						Size='39,43'
						Visible='false'
					>
						<Page
							AbsorbsInput='false'
							DropToParent='true'
							Location='12,4'
							Name='inner'
							OnDisableEffector='/effectors.opacity.slow.fadehalf'
							OnEnableEffector='/effectors.opacity.fast.fadefull'
							PackLocation='fff,nfn'
							PackSize='f,f'
							RStyleDefault='/Styles.New.thin_mmc.rs_default'
							ScrollExtent='12,12'
							Size='12,12'
						>
						</Page>
					</Page>
				</Page>
			<TabbedPane
				Activated='true'
				AutoRegister='true'
				ContextCapable='true'
				ContextToParent='true'
				DataSource='TabData'
				DragAccepts='Command'
				DropToParent='true'
				Location='33,3'
				MinimumScrollExtent='253,0'
				Name='tabs'
				OpacityRelativeMin='-1'
				PackLocation='nnn,nnn'
				PackSize='a,f'
				ScrollExtent='337,15'
				Size='337,15'
				Style='Nge_tabs.style'
				TabObject='tabButton'
			>
			</TabbedPane>
				<Namespace
					Name='Nge_tabs'
					Size='128,64'
				>
					<TabbedPaneStyle
						ButtonStyle='middlebutton.style'
						ButtonStyleLeft='middlebutton.style'
						ButtonStyleRight='middlebutton.style'
						Name='style'
					/>
					<Namespace
						Name='middlebutton'
					>
						<Namespace
							Name='activated'
						>
							<RectangleStyle
								Center='c'
								Color='#FFFFFF'
								East='e'
								Name='rs'
								West='w'
							/>
							<ImageStyle
								Name='w'
								Source='hud_ground_skin'
								SourceRect='461,0,475,17'
							/>
							<ImageStyle
								Name='e'
								Source='hud_ground_skin'
								SourceRect='497,0,511,17'
							/>
							<ImageStyle
								Name='c'
								Source='hud_ground_skin'
								SourceRect='475,0,496,17'
							/>
						</Namespace>
						<Namespace
							Name='selected'
						>
							<RectangleStyle
								Center='c'
								Color='#FFFFFF'
								East='e'
								Name='rs'
								West='w'
							/>
							<ImageStyle
								Name='w'
								Source='hud_ground_skin'
								SourceRect='461,0,475,17'
							/>
							<ImageStyle
								Name='e'
								Source='hud_ground_skin'
								SourceRect='497,0,511,17'
							/>
							<ImageStyle
								Name='c'
								Source='hud_ground_skin'
								SourceRect='475,0,496,17'
							/>
						</Namespace>
						<Namespace
							Name='default'
						>
							<RectangleStyle
								Center='c'
								Color='#FFFFFF'
								East='e'
								Name='rs'
								West='w'
							/>
							<ImageStyle
								Name='w'
								Source='hud_ground_skin'
								SourceRect='461,0,475,17'
							/>
							<ImageStyle
								Name='e'
								Source='hud_ground_skin'
								SourceRect='497,0,511,17'
							/>
							<ImageStyle
								Name='c'
								Source='hud_ground_skin'
								SourceRect='475,0,496,17'
							/>
						</Namespace>
						<Namespace
							Name='hover'
						>
							<RectangleStyle
								Center='c'
								Color='#FFFFFF'
								East='e'
								Name='rs'
								West='w'
							/>
							<ImageStyle
								Name='w'
								Source='hud_ground_skin'
								SourceRect='461,0,475,17'
							/>
							<ImageStyle
								Name='e'
								Source='hud_ground_skin'
								SourceRect='497,0,511,17'
							/>
							<ImageStyle
								Name='c'
								Source='hud_ground_skin'
								SourceRect='475,0,496,17'
							/>
						</Namespace>
						<Namespace
							Name='disabled'
						>
							<RectangleStyle
								Center='c'
								Color='#FFFFFF'
								East='e'
								Name='rs'
								West='w'
							/>
							<ImageStyle
								Name='w'
								Source='hud_ground_skin'
								SourceRect='461,0,475,17'
							/>
							<ImageStyle
								Name='e'
								Source='hud_ground_skin'
								SourceRect='497,0,511,17'
							/>
							<ImageStyle
								Name='c'
								Source='hud_ground_skin'
								SourceRect='475,0,496,17'
							/>
						</Namespace>
						<ButtonStyle
							DisabledTextColor='#028BA8'
							DisabledTextMargin='9,0,9,0'
							MouseOverSound='ui_rollover'
							MouseOverTextColor='#18393D'
							MouseOverTextMargin='9,0,9,0'
							MouseOverTextStyle='bold_12'
							Name='style'
							NormalTextColor='#2FF4FF'
							NormalTextMargin='9,0,9,0'
							NormalTextStyle='bold_12'
							PalActivatedText='textdefault'
							PalDisabledText='textdisabled'
							PalHoverText='texthover'
							PalNormalText='textdefault'
							PressedTextColor='#00393E'
							PressedTextMargin='9,0,9,0'
							ReleaseSound='ui_deselect'
							RStyleActivated='activated.rs'
							RStyleDefault='default.rs'
							RStyleDisabled='disabled.rs'
							RStyleMouseOver='hover.rs'
							RStyleMouseOverActivated='rs'
							RStyleMouseOverSelected='hover.rs'
							RStyleSelected='selected.rs'
							SelectedTextMargin='9,0,9,0'
							SelectedTextStyle='bold_12'
						/>
					</Namespace>
				</Namespace>
			<DataSource
				Name='TabData'
				Size='128,64'
			>
				<Data
					ContextCapable='true'
					DragType='chatWindowTab'
					Name='Instant Messenger'
					Size='128,64'
					Target='text'
				/>
				<Data
					ContextCapable='true'
					DragType='chatwindowtab'
					Name='Chat Messages'
					Size='128,64'
					Target='text'
				/>
				<Data
					ContextCapable='PLANET'
					DragType='chatWindowTab'
					Name='Planet'
					Size='128,64'
					Target='text'
				/>
			</DataSource>
			</Page>
			<Page
				AbsorbsInput='false'
				DropToParent='true'
				Location='0,91'
				Name='persistent'
				Opacity='1.00'
				PackLocation='nfn,fff'
				PackSize='a,f'
				ScrollExtent='523,54'
				Size='523,54'
			>
				<Page
					AbsorbsInput='false'
					Location='405,143'
					Name='buttons'
					OnDisableEffector='/effectors.fadeout'
					OnEnableEffector='/effectors.fadefull'
					PackLocation='nfn,fff'
					PackSize='f,f'
					ScrollExtent='14,14'
					Size='14,14'
				>
					<Button
						BackgroundColor='#FFFFFF'
						BackgroundOpacity='0.00'
						cmdname='CMD_uiChatCollapse'
						Dragable='true'
						DragType='command'
						Icon='/Styles.Icon.Misc.collapse_2'
						IconAlignment='Center'
						IconMargin='0,0,0,0'
						IconStretch='true'
						Name='collapse'
						OnPress='parent.expand.visible=true
						PackSize='a,a'
						RStyleDefault='rs_default'
						ScrollExtent='14,14'
						Size='14,14'
						Style='style'
						TextColor='#000000'
					></Button>
					<Button
						BackgroundOpacity='0.00'
						cmdname='CMD_uiChatCollapse'
						Dragable='true'
						DragType='command'
						Icon='/Styles.Icon.Misc.collapse'
						IconAlignment='Center'
						IconMargin='0,0,0,0'
						IconShrink='true'
						IconStretch='true'
						Name='expand'
						OnPress='parent.collapse.visible=true
						PackSize='a,a'
						ScrollExtent='14,14'
						Size='14,14'
						Style='style'
						TextColor='#000000'
						Visible='false'
					></Button>
				</Page>
				<Page
					BackgroundOpacity='1.00'
					GetsInput='false'
					Location='1,16'
					Name='corner_BL'
					Opacity='0.00'
					OpacityRelativeMin='0.00'
					PackLocation='nfn,fff'
					PackSize='f,f'
					RStyleDefault='/Styles.New.corner_chatBL.rs_default'
					ScrollExtent='24,37'
					Size='24,37'
					Visible='false'
				/>
					<Image
						MaximumSize='211,45'
						MinimumSize='211,45'
						Location='0,14'
						Name='left'
						Opacity='1.00'
						OpacityRelativeMin='-1'
						PackSize='f,f'
						ScrollExtent='211,45'
						Size='211,45'
						SourceRect='0,108,211,312'
						SourceResource='hud_ground_skin'
						Stretch='false'
					/>
				<Page
					BackgroundOpacity='1.00'
					GetsInput='false'
					Location='487,17'
					Name='corner_BR'
					Opacity='0.00'
					OpacityRelativeMin='0.00'
					PackLocation='fff,fff'
					PackSize='p,f'
					RStyleDefault='/Styles.New.corner_chatBR.rs_default'
					ScrollExtent='36,37'
					Size='36,37'
					Visible='false'
				/>
					<Image
						Location='418,15'
						MaximumSize='101,44'
						MinimumSize='101,44'
						Name='right'
						Opacity='1.00'
						OpacityRelativeMin='-1'
						PackLocation='fff,fff'
						PackSize='p,f'
						ScrollExtent='101,44'
						Size='101,44'
						SourceRect='211,108,312,151'
						SourceResource='hud_ground_skin'
					/>
					<Image
						Location='10,15'
						MaximumSize='16384,8'
						MinimumSize='0,8'
						Name='fillbottom1'
						OnDisableEffector='/effectors.fadefull'
						OnEnableEffector='/effectors.fadefull'
						Opacity='1.00'
						OpacityRelativeMin='-1'
						PackSize='absolute,absolute'
						ScrollExtent='410,8'
						Size='410,8'
						SourceRect='339,108,347,115'
						SourceResource='hud_ground_skin'
					/>
					<Image
						Location='10,45'
						MaximumSize='16384,8'
						MinimumSize='0,8'
						OnDisableEffector='/effectors.fadeout'
						OnEnableEffector='/effectors.fadefull'
						Opacity='1.00'
						OpacityRelativeMin='-1'
						Name='fillbottom2'
						PackSize='absolute,absolute'
						ScrollExtent='410,8'
						Size='410,8'
						SourceRect='339,138,347,148'
						SourceResource='hud_ground_skin'
					/>
				<Page
					DropToParent='true'
					Location='11,12'
					Name='body'
					PackSize='a'
					PalBgTint='back1'
					ScrollExtent='502,39'
					Size='502,39'
				>
					<Text
						BackgroundColor='#FFFFFF'
						DropToParent='true'
						Font='bold_11'
						LocalText='CHANNEL'
						Location='0,2'
						MaxLines='1'
						Name='textChannel'
						OpacityRelativeMin='-1'
						PackSize='f,a'
						PalText='header'
						ScrollExtent='70,32'
						Size='70,32'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#97FFFF'
					>CHANNEL</Text>
					<Textbox
						BackgroundOpacity='0.80'
						CuiIoWinNoArrow='true'
						DropToParent='true'
						EditableUnicode='true'
						IME='true'
						Location='72,9'
						Name='Input'
						OpacityRelativeMin='0.50'
						PackSize='a,a'
						RStyleDefault='/Styles.window.mfd.mfd3.rs_default'
						ScrollExtent='424,28'
						Size='424,28'
						Style='/Styles.textbox.chat.Style_bold'
					>sdfsdfsdfsdfs</Textbox>
				</Page>
			</Page>
		</Page>