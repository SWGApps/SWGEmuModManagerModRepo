		<Page
			altRadarBg.enabled='true'
			background.enabled='false'
			DropToParent='true'
			Location='843,1'
			MaximumSize='1600,1600'
			MinimumSize='180,160'
			Name='radar'
			OnDisable='compass.enabled=true
altRadarFg.enabled=false
radarwidget.enabled=false'
			OnEnable='compass.enabled=false
altRadarFg.enabled=true
radarwidget.enabled=true'
			PackLocation='fff,nnn'
			PackSize='f,f'
			ScrollExtent='180,160'
			Size='180,160'
			SizeIncrementLocked='true'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
			UserResizable='true'
		>
				<Page
					BackgroundOpacity='0.30'
					Location='6,0'
					Name='corner_TL'
					OpacityRelativeMin='-1'
					PackLocation='nfn,nfn'
					PackSize='f,f'
					RStyleDefault='Corner_ngeTL.rs_default'
					ScrollExtent='30,20'
					Size='30,20'
				/>
			<Namespace
				Name='Corner_ngeTL'
				Size='128,64'
			>
				<Namespace
					Name='default'
				>
					<ImageStyle
						Name='nw'
						Source='ui_rebel_final'
						SourceRect='144,216,130,205'
					/>
					<ImageStyle
						Name='ne'
						Source='ui_rebel_final'
						SourceRect='130,216,124,205'
					/>
					<ImageStyle
						Name='sw'
						Source='ui_rebel_final'
						SourceRect='144,205,130,192'
					/>
					<ImageStyle
						Name='se'
						Source='ui_rebel_final'
						SourceRect='130,205,124,192'
					/>
					<ImageStyle
						Name='n'
						Source='ui_rebel_final'
						SourceRect='130,216,131,205'
					/>
					<ImageStyle
						Name='s'
						Source='ui_rebel_final'
						SourceRect='129,205,130,192'
					/>
					<ImageStyle
						Name='w'
						Source='ui_rebel_final'
						SourceRect='144,205,130,206'
					/>
					<ImageStyle
						Name='e'
						Source='ui_rebel_final'
						SourceRect='130,205,124,206'
					/>
					<ImageStyle
						Name='c'
						Source='ui_rebel_final'
						SourceRect='131,202,132,203'
					/>
				</Namespace>
				<RectangleStyle
					Center='default.c'
					East='default.e'
					Name='rs_default'
					North='default.n'
					NorthEast='default.ne'
					NorthWest='default.nw'
					South='default.s'
					SouthEast='default.se'
					SouthWest='default.sw'
					West='default.w'
				/>
			</Namespace>
				<Page
					BackgroundOpacity='0.30'
					Location='149,0'
					Name='corner_TR'
					OpacityRelativeMin='-1'
					PackLocation='fff,nfn'
					PackSize='f,f'
					RStyleDefault='Corner_ngeTR.rs_default'
					ScrollExtent='30,20'
					Size='30,20'
				/>
			<Namespace
				Name='Corner_ngeTR'
				Size='128,64'
			>
				<Namespace
					Name='default'
				>
					<ImageStyle
						Name='nw'
						Source='ui_rebel_final'
						SourceRect='124,216,130,205'
					/>
					<ImageStyle
						Name='ne'
						Source='ui_rebel_final'
						SourceRect='130,216,144,205'
					/>
					<ImageStyle
						Name='sw'
						Source='ui_rebel_final'
						SourceRect='124,205,130,192'
					/>
					<ImageStyle
						Name='se'
						Source='ui_rebel_final'
						SourceRect='130,205,144,192'
					/>
					<ImageStyle
						Name='n'
						Source='ui_rebel_final'
						SourceRect='130,216,131,205'
					/>
					<ImageStyle
						Name='s'
						Source='ui_rebel_final'
						SourceRect='129,205,130,192'
					/>
					<ImageStyle
						Name='w'
						Source='ui_rebel_final'
						SourceRect='124,205,130,206'
					/>
					<ImageStyle
						Name='e'
						Source='ui_rebel_final'
						SourceRect='130,205,144,206'
					/>
					<ImageStyle
						Name='c'
						Source='ui_rebel_final'
						SourceRect='131,202,132,203'
					/>
				</Namespace>
				<RectangleStyle
					Center='default.c'
					East='default.e'
					Name='rs_default'
					North='default.n'
					NorthEast='default.ne'
					NorthWest='default.nw'
					South='default.s'
					SouthEast='default.se'
					SouthWest='default.sw'
					West='default.w'
				/>
			</Namespace>
			<Data
				arrow='altRadarFg.square.blips.arrow'
				arrowBracket='altRadarFg.square.blips.arrowBracket'
				arrowGroup='altRadarFg.square.blips.arrowGroup'
				arrowWaypoint='altRadarFg.square.blips.arrowWaypoint'
				Background='background'
				blipBracket='altRadarFg.square.blips.blip_bracket'
				blipCircle='altRadarFg.square.blips.blipCircle'
				blipCorpse='altRadarFg.square.blips.blip_corpse'
				blipDefault='altRadarFg.square.blips.blip_default'
				blipGroup='altRadarFg.square.blips.blip_group'
				blipRing='altRadarFg.square.blips.blip_ring'
				blipStructure='altRadarFg.square.blips.blip_structure'
				blipWaypoint='altRadarFg.square.blips.blip_waypoint'
				conMode='altRadarFg.square.ConModeBox'
				effectorWaypoint='/effectors.color.cycle.bgtint.greyWhite'
				iconimage='iconImage'
				Name='CodeData'
				radarcompass='altRadarFg.square.compass'
				radarCompassTop='altRadarFg.square.compassTop'
				radarwidget='altRadarFg.square.radarwidget'
				rangeindicator='altRadarFg.square.range'
				regionindicator='altRadarFg.square.region'
				square='altRadarFg.square'
				textHeight='coord.height.text'
				textLat='coord.lat.text'
				textLong='coord.long.text'
				toolTipPage='altRadarFg'
				waypointarrow='altRadarFg.square.blips.waypointarrow'
				zoombottom='altRadarFg.square.zoombottom'
				zoomtop='altRadarFg.square.zoomtop'
			/>
			<Page
				Location='30,6'
				Name='altRadarFg'
				PackSize='a,a'
				ScrollExtent='132,128'
				Size='132,128'
				TooltipDelay='false'
			>
				<Page
					Name='square'
					ScrollExtent='132,128'
					Size='132,128'
				>
			<Checkbox
				BorderOffsetX='10'
				BorderOffsetY='10'
				IconMargin='0,0,0,0'
				IconShrink='true'
				IconStretch='true'
				LocalTooltip='Con'
				Location='100,11'
				Name='ConModeBox'
				Opacity='1.00'
				OpacityRelativeMin='-1'
				PackLocation='proportional,proportional'
				PackSize='f,f'
				ScrollExtent='21,18'
				Size='21,18'
				Style='ConModeBoxStyle.Style'
				Tooltip='Con'
			></Checkbox>
			<Namespace
				Name='ConModeBoxStyle'
				Size='128,64'
			>
				<ImageStyle
					Name='checkedImage'
					Size='128,64'
					Source='hud_ground_radar'
					SourceRect='436,117,455,135'
				/>
				<CheckboxStyle
					Name='Style'
					NormalCheckedImage='checkedImage'
					NormalTextStyle='bold_11'
					NormalUncheckedImage='uncheckedImage'
					TextOffset='26,0'
				/>
				<ImageStyle
					Name='uncheckedImage'
					Size='128,64'
					Source='hud_ground_radar'
					SourceRect='437,81,456,99'
				/>
			</Namespace>
				<Button
					BorderOffsetX='10'
					BorderOffsetY='10'
					BackgroundOpacity='1.00'
					cmdname='CMD_uiRadarRangeDecrease'
					Dragable='true'
					DragType='command'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					Location='112,29'
					Name='ZoomTop'
					Opacity='1.00'
					OpacityRelativeMin='-1'
					PackLocation='proportional,proportional'
					PackSize='f,f'
					ScrollExtent='21,21'
					Size='21,21'
					Style='zoomTopStyle.style'
				></Button>
				<Button
					BorderOffsetX='10'
					BorderOffsetY='10'
					BackgroundOpacity='1.00'
					cmdname='CMD_uiRadarRangeIncrease'
					Dragable='true'
					DragType='command'
					GroundHUD.radar.inner.square.Range.opacity='0'
					IconMargin='0,0,0,0'
					IconShrink='true'
					IconStretch='true'
					Location='110,82'
					Name='ZoomBottom'
					Opacity='1.00'
					OpacityRelativeMin='-1'
					PackLocation='proportional,proportional'
					PackSize='f,f'
					ScrollExtent='21,21'
					Size='21,21'
					Style='zoomBottomStyle.style'
				></Button>
				<Namespace
					Name='zoomTopStyle'
					Size='128,64'
				>
					<ButtonStyle
						DisabledTextColor='#777777'
						MouseOverSound='ui_rollover'
						Name='style'
						NormalIconColor='#EEEEEE'
						NormalTextStyle='bold_15'
						ReleaseSound='ui_deselect'
						RStyleActivated='rs_activated'
						RStyleDefault='rs_default'
						RStyleDisabled='rs_disabled'
						RStyleMouseOver='rs_hover'
						RStyleMouseOverActivated='rs_activated'
						RStyleSelected='rs_selected'
					/>
					<RectangleStyle
						Center='default_c'
						Name='rs_default'
					/>
					<RectangleStyle
						Center='hover_c'
						Name='rs_hover'
						NorthShrink='false'
						SouthShrink='false'
						SouthStretch='false'
					/>
					<RectangleStyle
						Center='activate_c'
						Name='rs_activated'
					/>
					<RectangleStyle
						Center='disabled_c'
						Name='rs_disabled'
					/>
					<ImageStyle
						Name='default_c'
						Source='hud_ground_radar'
						SourceRect='436,18,457,38'
					/>
					<ImageStyle
						Name='hover_c'
						Source='hud_ground_radar'
						SourceRect='436,18,457,38'
					/>
					<ImageStyle
						Name='activate_c'
						Source='hud_ground_radar'
						SourceRect='436,18,457,38'
					/>
					<ImageStyle
						Name='disabled_c'
						Source='hud_ground_radar'
						SourceRect='436,18,457,38'
					/>
				</Namespace>
				<Namespace
					Name='zoomBottomStyle'
					Size='128,64'
				>
					<ButtonStyle
						DisabledTextColor='#777777'
						MouseOverSound='ui_rollover'
						Name='style'
						NormalIconColor='#EEEEEE'
						NormalTextStyle='bold_15'
						ReleaseSound='ui_deselect'
						RStyleActivated='rs_activated'
						RStyleDefault='rs_default'
						RStyleDisabled='rs_disabled'
						RStyleMouseOver='rs_hover'
						RStyleMouseOverActivated='rs_activated'
						RStyleSelected='rs_selected'
					/>
					<RectangleStyle
						Center='default_c'
						Name='rs_default'
					/>
					<RectangleStyle
						Center='hover_c'
						Name='rs_hover'
						NorthShrink='false'
						SouthShrink='false'
						SouthStretch='false'
					/>
					<RectangleStyle
						Center='activate_c'
						Name='rs_activated'
					/>
					<RectangleStyle
						Center='disabled_c'
						Name='rs_disabled'
					/>
					<ImageStyle
						Name='default_c'
						Source='hud_ground_radar'
						SourceRect='435,44,455,65'
					/>
					<ImageStyle
						Name='hover_c'
						Source='hud_ground_radar'
						SourceRect='435,44,455,65'
					/>
					<ImageStyle
						Name='activate_c'
						Source='hud_ground_radar'
						SourceRect='435,44,455,65'
					/>
					<ImageStyle
						Name='disabled_c'
						Source='hud_ground_radar'
						SourceRect='435,44,455,65'
					/>
				</Namespace>
					<Text
						BackgroundColor='#FFFFFF'
						BackgroundScrolls='false'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_11'
						Location='0,80'
						MaxLines='1'
						Name='Region'
						PackLocation='cfc,fff'
						PackSize='f,f'
						PalText='contrast1'
						ScrollExtent='122,17'
						Size='122,17'
						TextAlignment='Center'
						TextColor='#62FF15'
					></Text>
					<Image
						Enabled='false'
						GetsInput='true'
						Location='-2,-3'
						MinimumScrollExtent='135,135'
						Name='compassTop'
						Opacity='1.00'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='p,p'
						ScrollExtent='135,135'
						Size='135,135'
						SourceRect='72,42,1137,1165'
						SourceResource='hud_radar_skinned_arrow'
					/>
					<Image
						AbsorbsInput='false'
						Location='1,1'
						MaximumSize='1600,1600'
						MinimumSize='126,126'
						Name='radarSkinLarge'
						Opacity='1.00'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='a,a'
						ScrollExtent='126,126'
						Size='126,126'
						SourceRect='242,244,512,512'
						SourceResource='hud_ground_radar'
					/>
					<Page
						Name='blips'
						OpacityRelativeMin='1.00'
						PackSize='a,a'
						ScrollExtent='128,128'
						Size='128,128'
					>
						<Image
							BackgroundColor='#FFFFFF'
							Location='55,0'
							Name='arrowGroup'
							OpacityRelativeMin='1.00'
							ScrollExtent='19,19'
							Size='19,19'
							Style='/Styles.Icon.Misc.star'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='82,40'
							Name='blip_group'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='/Styles.Icon.Misc.star'
						/>
						<Image
							Location='56,0'
							Name='arrowBracket'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,npn'
							PackSize='p,p'
							ScrollExtent='16,19'
							Size='16,19'
							Style='images.arrows.bracket'
							TextOpacityRelativeApply='true'
							UserResizable='true'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='77,61'
							Name='blip_bracket'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.bracket'
						/>
						<Image
							Location='55,13'
							Name='arrowWaypoint'
							OpacityRelativeMin='1.00'
							PackLocation='cpc,cpc'
							PackSize='f,f'
							Rotation='-0.25'
							ScrollExtent='18,7'
							Size='18,7'
							SourceRect='476,317,508,326'
							SourceResource='ui_rebel_final'
							UserResizable='true'
							VisualEditLock='true'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='55,45'
							Name='blip_corpse'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.corpse'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='72,15'
							Name='blip_waypoint'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.waypoint'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='63,40'
							Name='blip_structure'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.structure'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='29,39'
							Name='blip_default'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.default_small'
						/>
						<Image
							Location='62,0'
							Name='arrow'
							OpacityRelativeMin='1.00'
							PackLocation='cfc,npn'
							PackSize='p,p'
							ScrollExtent='5,19'
							Size='5,19'
							Style='images.arrows.default_small'
							UserResizable='true'
							VisualEditLock='true'
						/>
						<Image
							BackgroundColor='#FFFFFF'
							Location='36,65'
							Name='blip_ring'
							OpacityRelativeMin='1.00'
							ScrollExtent='12,12'
							Size='12,12'
							Style='images.blips.default_ring'
						/>
					</Page>
					<Text
						BackgroundColor='#FFFFFF'
						ColorCarat='#FFFFFF'
						ColorSelection='#FFFFFF'
						Font='bold_11'
						LocalText='[@radar_range]'
						Location='0,93'
						Name='Range'
						Opacity='1.00'
						PackLocation='cfc,fff'
						PackSize='f,f'
						PalText='contrast1'
						ScrollExtent='122,17'
						Size='122,17'
						TextAlignment='Center'
						TextColor='#62FF15'
					>@radar_range</Text>
					<Image
						Color='#FFFFFF'
						Enabled='false'
						GetsInput='true'
						MinimumScrollExtent='133,123'
						Name='compass'
						Opacity='0.00'
						OpacityRelativeMin='0.00'
						PackLocation='cfc,cfc'
						PackSize='p,p'
						PalColor='radar'
						ScrollExtent='133,128'
						Size='128,128'
						SourceRect='31,37,206,212'
						SourceResource='ui_radar_2'
						Visible='false'
					/>
					<CuiWidgetGroundRadar
						Name='RadarWidget'
						OnDisableEffector='/effectors.fadethreequarter'
						OnEnableEffector='/effectors.fadefull'
						OpacityRelativeMin='0.50'
						PackSize='a,a'
						ScrollExtent='128,128'
						Size='128,128'
						TextStyle='bold_16'
					/>
				</Page>
			</Page>
			<Page
				Location='5,135'
				MaximumSize='172,42'
				MinimumSize='172,42'
				Name='Coord'
				Opacity='1.00'
				OpacityRelativeMin='1.00'
				PackLocation='cfc,fff'
				ScrollExtent='172,42'
				Size='172,42'
			>
				<Page
					BackgroundColor='#4E3E33'
					BackgroundOpacity='0.00'
					MaximumSize='60,30'
					MinimumSize='60,30'
					Location='0,0'
					Name='long'
					Opacity='1.00'
					OpacityRelativeMin='1.00'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='60,30'
					Size='60,30'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						Opacity='1.00'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='f,f'
						PalText='text1'
						ScrollExtent='70,20'
						Size='70,20'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#FFFFFF'
					>xxx,xxx\"</Text>
				</Page>
				<Page
					BackgroundColor='#4E3E33'
					BackgroundOpacity='0.00'
					Location='59,0'
					MaximumSize='60,30'
					MinimumSize='60,30'
					Name='height'
					Opacity='1.00'
					OpacityRelativeMin='1.00'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='60,30'
					Size='60,30'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						Opacity='1.00'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='f,f'
						PalText='text1'
						ScrollExtent='57,20'
						Size='57,20'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#FFFFFF'
					>xxx,xxx\"</Text>
				</Page>
				<Page
					BackgroundColor='#4E3E33'
					BackgroundOpacity='0.00'
					Location='109,0'
					MaximumSize='60,30'
					MinimumSize='60,30'
					Name='lat'
					Opacity='1.00'
					OpacityRelativeMin='1.00'
					PackLocation='nfn,nfn'
					PackSize='a,f'
					ScrollExtent='60,30'
					Size='60,30'
				>
					<Text
						Font='bold_13'
						LocalText='xxx,xxx\"'
						Name='text'
						Opacity='1.00'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='f,f'
						PalText='text1'
						ScrollExtent='69,20'
						Size='69,20'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
						TextColor='#FFFFFF'
					>xxx,xxx\"</Text>
				</Page>
					<Image
						Location='2,0'
						MaximumSize='170,20'
						MinimumSize='170,20'
						Name='CoordSkin'
						Opacity='1.00'
						OpacityRelativeMin='1.00'
						PackLocation='cfc,cfc'
						PackSize='f,f'
						ScrollExtent='170,20'
						Size='170,20'
						SourceRect='391,496,509,510'
						SourceResource='hud_ground_skin'
					/>
			</Page>
			<Image
				Location='26,4'
				Name='IconImage'
				OpacityRelativeMin='1.00'
				ScrollExtent='32,32'
				Size='32,32'
				SourceRect='10,9,56,55'
				SourceResource='ui_sm_radar_compass'
				Visible='false'
			/>
			<Namespace
				Name='images'
			>
				<Namespace
					Name='arrows'
				>
					<ImageStyle
						Name='bracket'
						Source='ui_rebel_final'
						SourceRect='398,83,409,95'
					/>
					<ImageStyle
						Name='arrow_waypoint'
						Source='ui_rebel_icons'
						SourceRect='34,325,48,334'
					/>
					<ImageStyle
						Name='default_small'
						Source='ui_rebel_final'
						SourceRect='477,305,477,305'
					/>
				</Namespace>
				<Namespace
					Name='blips'
				>
					<ImageStyle
						Name='bracket'
						Source='ui_rebel_final'
						SourceRect='399,99,408,107'
					/>
					<ImageStyle
						Name='waypoint'
						Source='ui_rebel_final'
						SourceRect='400,62,408,70'
					/>
					<ImageStyle
						Name='structure'
						Source='ui_rebel_final'
						SourceRect='401,47,409,54'
					/>
					<ImageStyle
						Name='corpse'
						Source='ui_rebel_final'
						SourceRect='400,55,408,62'
					/>
					<ImageStyle
						Name='default_small'
						Source='ui_rebel_final'
						SourceRect='400,39,408,46'
					/>
					<ImageStyle
						Name='default_ring'
						Source='ui_rebel_final'
						SourceRect='455,283,470,298'
					/>
				</Namespace>
			</Namespace>
		</Page>