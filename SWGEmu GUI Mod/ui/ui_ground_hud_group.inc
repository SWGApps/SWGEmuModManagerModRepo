		<Page
			BackgroundOpacity='0'
			Location='0,117'
			MinimumSize='214,50'
			Name='group'
			OnDisableEffector='/effectors.opacity.bg.fadeout'
			OnEnableEffector='/effectors.opacity.bg.fadethreequarter'
			PackLocation='nfn,nfn'
			PackSize='f'
			Selectable='true'
			ScrollExtent='214,50'
			Size='214,50'
			SizeIncrement='1,50'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
			UserMovable='true'
			UserResizable='false'
		>
			<Data
				Composite='comp'
				Name='CodeData'
				sample='comp.sample'
			/>
			<RectangleStyle
				Center='zeroImage'
				Name='zero'
			/>
			<Composite
				Location='0,0'
				Name='comp'
				PackSize='a,a'
				ScrollExtent='201,147'
				ScrollSizeLine='1,64'
				ScrollSizePage='0,64'
				Selectable='true'
				Size='201,147'
				Spacing='0'
				SpacingType='Constant'
			>
				<Page
					BackgroundColor='#0000FF'
					MinimumSize='0,47'
					Name='sample'
					OnEnableEffector='/Effectors.Fadefull'
					PackSize='a,f'
					ScrollExtent='201,47'
					Selectable='true'
					Size='201,47'
					TextOpacityRelativeApply='true'
					TextOpacityRelativeMin='0.80'
				>
					<Data
						directionArrow='arrow'
						iconposture='icon'
						Name='CodeData'
						pagea='ham.a'
						pageh='ham.h'
						pagem='ham.m'
						samplestateicon='sampleStateIcon'
						volumestates='states'
					/>
						<Image
							LocalTooltip='post'
							Location='0,2'
							Name='icon'
							Opacity='1'
							OpacityRelativeMin='1'
							PackLocation='f,f'
							PackSize='f,f'
							ScrollExtent='34,34'
							Selectable='true'
							Size='34,34'
							Style='/Styles.Icon.posture.upright'
							Tooltip='post'
						/>
						<Image
							ContextToParent='true'
							Location='181,30'
							Name='arrow'
							OpacityRelativeMin='1'
							PackLocation='fff'
							Rotation='0.30'
							ScrollExtent='13,13'
							Selectable='true'
							Size='13,13'
							SourceRect='482,309,506,334'
							SourceResource='ui_rebel_final'
						/>
						<VolumePage
							CellAlignmentH='left'
							CellCount='4,1'
							CellPadding='0,0'
							CellSelectable='false'
							CellSelectionOverlayOpacity='1.00'
							CellSize='16,16'
							GetsInput='false'
							Location='35,30'
							MinimumScrollExtent='64,16'
							Name='states'
							OpacityRelativeMin='1.00'
							PackLocation='fff'
							PackSize='a,a'
							ScrollExtent='79,23'
							Size='79,23'
						>
							<Image
								MaximumSize='16,16'
								MinimumSize='16,16'
								Name='i'
								ScrollExtent='16,16'
								Size='16,16'
								Style='/Styles.Icon.state.alert'
							/>
							<Image
								Location='16,0'
								MaximumSize='16,16'
								MinimumSize='16,16'
								Name='i'
								ScrollExtent='16,16'
								Size='16,16'
								Style='/Styles.Icon.state.peace'
							/>
							<Image
								Location='32,0'
								MaximumSize='16,16'
								MinimumSize='16,16'
								Name='i'
								ScrollExtent='16,16'
								Size='16,16'
								Style='/Styles.Icon.state.aiming'
							/>
						</VolumePage>
					<Composite
						BackgroundColor='#003366'
						ContextToParent='true'
						FillRemainder='false'
						GetsInput='false'
						Location='35,12'
						MinimumSize='200,18'
						Name='ham'
						OpacityRelativeMin='1.00'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						ScrollExtent='200,18'
						Size='200,18'
						SpacingType='Fill'
					>
						<Page
							MinimumSize='5,5'
							Name='h'
							Orientation='horizontal'
							PackLocation='nfn,nfn'
							PackSize='a'
							ScrollExtent='160,6'
							Size='160,6'
						>
							<Data
								current='current'
								currentmax='normalmax.currentMax'
								Name='CodeData'
								NormalMax='NormalMax'
								recentcurrent='normalmax.recentcurrent'
								recentmax='normalmax.recentmax'
							/>
							<Page
								BackgroundOpacity='0.85'
								Color='#FF0000'
								Name='Current'
								PackSize='a,1'
								RStyleDefault='/Styles.ham_new.tip.rs_default'
								ScrollExtent='108,6'
								Size='108,6'
							/>
							<Page
								BackgroundOpacity='0.90'
								Color='#640000'
								MaximumSize='160,6'
								MinimumSize='160,6'
								Name='NormalMax'
								PackSize='a,1'
								RStyleDefault='/Styles.ham_new.bar.rs_default'
								ScrollExtent='160,6'
								Size='160,6'
							>
									<Page
										BackgroundOpacity='1.00'
										Color='#000000'
										Location='97,0'
										MinimumSize='0,6'
										Name='CurrentMax'
										PackLocation='fpf'
										PackSize='a,1'
										RStyleDefault='/Styles.ham_new.bar.rs_default'
										ScrollExtent='11,6'
										Size='11,6'
									/>
									<Page
										BackgroundColor='#FFFF00'
										BackgroundOpacity='1.00'
										Name='RecentMax'
										PackSize='a,p'
										RStyleDefault='/Styles.ham_new.move.rs_default'
										ScrollExtent='108,6'
										Size='108,6'
										Visible='false'
									/>
									<Page
										BackgroundOpacity='1.00'
										Color='#FFFFFF'
										Name='RecentCurrent'
										PackSize='a,1'
										RStyleDefault='/Styles.ham_new.tip.rs_default'
										ScrollExtent='7,6'
										Size='7,6'
									/>
							</Page>
						</Page>
						<Page
							Location='0,6'
							MinimumSize='5,5'
							Name='a'
							OnHide='parent.H.packSize=a,0.5'
							OnShow='parent.H.packSize=a'
							Orientation='horizontal'
							PackLocation='nfn,nfn'
							PackSize='a'
							ScrollExtent='160,6'
							Size='160,6'
						>
							<Data
								current='current'
								currentmax='normalmax.currentMax'
								Name='CodeData'
								NormalMax='NormalMax'
								recentcurrent='normalmax.recentcurrent'
								recentmax='normalmax.recentmax'
							/>
							<Page
								BackgroundOpacity='0.85'
								Color='#00FF00'
								Name='Current'
								PackSize='a,a'
								RStyleDefault='/Styles.ham_new.tip.rs_default'
								ScrollExtent='108,6'
								Size='108,6'
							/>
							<Page
								BackgroundOpacity='0.90'
								Color='#006400'
								MaximumSize='160,6'
								MinimumSize='160,6'
								Name='NormalMax'
								PackSize='a,1'
								RStyleDefault='/Styles.ham_new.bar.rs_default'
								ScrollExtent='160,8'
								Size='160,8'
							>
									<Page
										BackgroundOpacity='1.00'
										Color='#000000'
										Location='97,0'
										MinimumSize='0,6'
										Name='CurrentMax'
										PackLocation='fpf'
										PackSize='a,1'
										RStyleDefault='/Styles.ham_new.bar.rs_default'
										ScrollExtent='11,6'
										Size='11,6'
									/>
									<Page
										BackgroundColor='#FFFF00'
										BackgroundOpacity='1.00'
										Name='RecentMax'
										PackSize='a,p'
										RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
										ScrollExtent='108,6'
										Size='108,6'
										Visible='false'
									/>
									<Page
										BackgroundOpacity='1.00'
										Color='#FFFFFF'
										Name='RecentCurrent'
										PackSize='a,1'
										RStyleDefault='/Styles.ham_new.tip.rs_default'
										ScrollExtent='7,6'
										Size='7,6'
									/>
							</Page>
						</Page>
						<Page
							Location='0,12'
							MinimumSize='5,5'
							Name='m'
							Orientation='horizontal'
							PackLocation='nfn,nfn'
							PackSize='a'
							ScrollExtent='160,6'
							Size='160,6'
						>
							<Data
								current='current'
								currentmax='normalmax.currentMax'
								Name='CodeData'
								NormalMax='NormalMax'
								recentcurrent='normalmax.recentcurrent'
								recentmax='normalmax.recentmax'
							/>
							<Page
								BackgroundOpacity='0.85'
								Color='#0000FF'
								Name='Current'
								PackSize='a,1'
								RStyleDefault='/Styles.ham_new.tip.rs_default'
								ScrollExtent='108,6'
								Size='108,6'
							/>
							<Page
								BackgroundOpacity='0.90'
								Color='#000080'
								MaximumSize='160,6'
								MinimumSize='160,6'
								Name='NormalMax'
								PackSize='a,1'
								RStyleDefault='/Styles.ham_new.bar.rs_default'
								ScrollExtent='160,6'
								Size='160,6'
							>
									<Page
										BackgroundOpacity='1.00'
										Color='#000000'
										Location='97,0'
										MinimumSize='0,6'
										Name='CurrentMax'
										PackLocation='fpf'
										PackSize='a,1'
										RStyleDefault='/Styles.ham_new.bar.rs_default'
										ScrollExtent='11,6'
										Size='11,6'
									/>
									<Page
										BackgroundColor='#FFFF00'
										BackgroundOpacity='1.00'
										Name='RecentMax'
										PackSize='a,p'
										RStyleDefault='/Styles.mfd.statusbars_small.RecentCurrent.style'
										ScrollExtent='108,6'
										Size='108,6'
										Visible='false'
									/>
									<Page
										BackgroundOpacity='1.00'
										Color='#FFFFFF'
										Name='RecentCurrent'
										PackSize='a,1'
										RStyleDefault='/Styles.ham_new.tip.rs_default'
										ScrollExtent='7,6'
										Size='7,6'
									/>
							</Page>
						</Page>
					</Composite>
					<Image
						BackgroundColor='#FFFFFF'
						Location='233,-1'
						Name='IconFocus'
						OpacityRelativeMin='1.00'
						PackLocation='fff,nfn'
						PackSize='f,f'
						ScrollExtent='13,12'
						Size='13,12'
						SourceRect='493,221,482,211'
						SourceResource='ui_rebel_final'
					/>
					<Text
						Font='bold_12'
						LocalText='xxx target name'
						Location='35,0'
						MaxLines='1'
						Name='textName'
						PackLocation='nfn,nfn'
						PackSize='a,f'
						ScrollExtent='202,15'
						Size='202,15'
						TextColor='#2DFF15'
					>xxx target name</Text>
					<Image
						LocalTooltip='tooltip'
						Location='143,20'
						MaximumSize='20,20'
						MinimumSize='20,20'
						Name='sampleStateIcon'
						OnDisable='opacity=0'
						OnEnableEffector='/effectors.opacity.fast.fadefull'
						ScrollExtent='20,20'
						Size='20,20'
						Style='/Styles.Icon.state.cover'
						Tooltip='tooltip'
						Visible='false'
					/>
					<Page
						BackgroundOpacity='1.00'
						GetsInput='false'
						Location='0,0'
						Name='back'
						OnDisableEffector='/effectors.opacity.bg.fadeout'
						OnEnableEffector='/effectors.opacity.bg.fadethreequarter'
						PackLocation='nfn,nfn'
						PackSize='a,a'
						PalBgTint='back1'
						RStyleDefault='/Styles.New.tool.tool_TL_in.rs_default'
						ScrollExtent='201,47'
						Selectable='true'
						Size='201,47'
					/>
					</Page>
				</Page>
			</Composite>
		</Page>
