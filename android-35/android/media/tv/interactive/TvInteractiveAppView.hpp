#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../../JFloatArray.hpp"
#include "../../../content/Context.def.hpp"
#include "../../../graphics/Rect.def.hpp"
#include "../../PlaybackParams.def.hpp"
#include "../TvRecordingInfo.def.hpp"
#include "../TvView.def.hpp"
#include "./TvInteractiveAppView_TvInteractiveAppCallback.def.hpp"
#include "../../../net/Uri.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../view/InputEvent.def.hpp"
#include "../../../view/KeyEvent.def.hpp"
#include "../../../view/View.def.hpp"
#include "../../../../JString.hpp"
#include "./TvInteractiveAppView.def.hpp"

namespace android::media::tv::interactive
{
	// Fields
	inline JString TvInteractiveAppView::BI_INTERACTIVE_APP_KEY_ALIAS()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppView",
			"BI_INTERACTIVE_APP_KEY_ALIAS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppView::BI_INTERACTIVE_APP_KEY_CERTIFICATE()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppView",
			"BI_INTERACTIVE_APP_KEY_CERTIFICATE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppView::BI_INTERACTIVE_APP_KEY_HTTP_ADDITIONAL_HEADERS()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppView",
			"BI_INTERACTIVE_APP_KEY_HTTP_ADDITIONAL_HEADERS",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppView::BI_INTERACTIVE_APP_KEY_HTTP_USER_AGENT()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppView",
			"BI_INTERACTIVE_APP_KEY_HTTP_USER_AGENT",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppView::BI_INTERACTIVE_APP_KEY_PRIVATE_KEY()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppView",
			"BI_INTERACTIVE_APP_KEY_PRIVATE_KEY",
			"Ljava/lang/String;"
		);
	}
	inline JString TvInteractiveAppView::ERROR_KEY_METHOD_NAME()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppView",
			"ERROR_KEY_METHOD_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TvInteractiveAppView::TvInteractiveAppView(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.media.tv.interactive.TvInteractiveAppView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TvInteractiveAppView::TvInteractiveAppView(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.media.tv.interactive.TvInteractiveAppView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TvInteractiveAppView::TvInteractiveAppView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.media.tv.interactive.TvInteractiveAppView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline void TvInteractiveAppView::clearCallback() const
	{
		callMethod<void>(
			"clearCallback",
			"()V"
		);
	}
	inline void TvInteractiveAppView::clearOnUnhandledInputEventListener() const
	{
		callMethod<void>(
			"clearOnUnhandledInputEventListener",
			"()V"
		);
	}
	inline void TvInteractiveAppView::createBiInteractiveApp(android::net::Uri arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"createBiInteractiveApp",
			"(Landroid/net/Uri;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppView::destroyBiInteractiveApp(JString arg0) const
	{
		callMethod<void>(
			"destroyBiInteractiveApp",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean TvInteractiveAppView::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TvInteractiveAppView::dispatchUnhandledInputEvent(android::view::InputEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.object()
		);
	}
	inline JObject TvInteractiveAppView::getOnUnhandledInputEventListener() const
	{
		return callObjectMethod(
			"getOnUnhandledInputEventListener",
			"()Landroid/media/tv/interactive/TvInteractiveAppView$OnUnhandledInputEventListener;"
		);
	}
	inline void TvInteractiveAppView::notifyError(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"notifyError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppView::notifyRecordingScheduled(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"notifyRecordingScheduled",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TvInteractiveAppView::notifyRecordingStarted(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"notifyRecordingStarted",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TvInteractiveAppView::notifyRecordingStopped(JString arg0) const
	{
		callMethod<void>(
			"notifyRecordingStopped",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView::notifyTimeShiftCurrentPositionChanged(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"notifyTimeShiftCurrentPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvInteractiveAppView::notifyTimeShiftPlaybackParams(android::media::PlaybackParams arg0) const
	{
		callMethod<void>(
			"notifyTimeShiftPlaybackParams",
			"(Landroid/media/PlaybackParams;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppView::notifyTimeShiftStartPositionChanged(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"notifyTimeShiftStartPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvInteractiveAppView::notifyTimeShiftStatusChanged(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"notifyTimeShiftStatusChanged",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvInteractiveAppView::notifyTvMessage(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"notifyTvMessage",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	inline void TvInteractiveAppView::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	inline void TvInteractiveAppView::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	inline void TvInteractiveAppView::onLayout(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"onLayout",
			"(ZIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline void TvInteractiveAppView::onMeasure(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean TvInteractiveAppView::onUnhandledInputEvent(android::view::InputEvent arg0) const
	{
		return callMethod<jboolean>(
			"onUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.object()
		);
	}
	inline void TvInteractiveAppView::onVisibilityChanged(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"onVisibilityChanged",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void TvInteractiveAppView::prepareInteractiveApp(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"prepareInteractiveApp",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvInteractiveAppView::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void TvInteractiveAppView::resetInteractiveApp() const
	{
		callMethod<void>(
			"resetInteractiveApp",
			"()V"
		);
	}
	inline void TvInteractiveAppView::sendAvailableSpeeds(JFloatArray arg0) const
	{
		callMethod<void>(
			"sendAvailableSpeeds",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void TvInteractiveAppView::sendCurrentChannelLcn(jint arg0) const
	{
		callMethod<void>(
			"sendCurrentChannelLcn",
			"(I)V",
			arg0
		);
	}
	inline void TvInteractiveAppView::sendCurrentChannelUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"sendCurrentChannelUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppView::sendCurrentTvInputId(JString arg0) const
	{
		callMethod<void>(
			"sendCurrentTvInputId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvInteractiveAppView::sendCurrentVideoBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"sendCurrentVideoBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppView::sendSigningResult(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"sendSigningResult",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void TvInteractiveAppView::sendStreamVolume(jfloat arg0) const
	{
		callMethod<void>(
			"sendStreamVolume",
			"(F)V",
			arg0
		);
	}
	inline void TvInteractiveAppView::sendTimeShiftMode(jint arg0) const
	{
		callMethod<void>(
			"sendTimeShiftMode",
			"(I)V",
			arg0
		);
	}
	inline void TvInteractiveAppView::sendTrackInfoList(JObject arg0) const
	{
		callMethod<void>(
			"sendTrackInfoList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppView::sendTvRecordingInfo(android::media::tv::TvRecordingInfo arg0) const
	{
		callMethod<void>(
			"sendTvRecordingInfo",
			"(Landroid/media/tv/TvRecordingInfo;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppView::sendTvRecordingInfoList(JObject arg0) const
	{
		callMethod<void>(
			"sendTvRecordingInfoList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void TvInteractiveAppView::setCallback(JObject arg0, android::media::tv::interactive::TvInteractiveAppView_TvInteractiveAppCallback arg1) const
	{
		callMethod<void>(
			"setCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/tv/interactive/TvInteractiveAppView$TvInteractiveAppCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppView::setOnUnhandledInputEventListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"setOnUnhandledInputEventListener",
			"(Ljava/util/concurrent/Executor;Landroid/media/tv/interactive/TvInteractiveAppView$OnUnhandledInputEventListener;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvInteractiveAppView::setTeletextAppEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setTeletextAppEnabled",
			"(Z)V",
			arg0
		);
	}
	inline jint TvInteractiveAppView::setTvView(android::media::tv::TvView arg0) const
	{
		return callMethod<jint>(
			"setTvView",
			"(Landroid/media/tv/TvView;)I",
			arg0.object()
		);
	}
	inline void TvInteractiveAppView::startInteractiveApp() const
	{
		callMethod<void>(
			"startInteractiveApp",
			"()V"
		);
	}
	inline void TvInteractiveAppView::stopInteractiveApp() const
	{
		callMethod<void>(
			"stopInteractiveApp",
			"()V"
		);
	}
} // namespace android::media::tv::interactive

// Base class headers
#include "../../../view/View.hpp"
#include "../../../view/ViewGroup.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif
