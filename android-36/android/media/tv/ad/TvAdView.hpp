#pragma once

#include "../../../../JByteArray.hpp"
#include "../../../content/Context.def.hpp"
#include "../../../graphics/Rect.def.hpp"
#include "../TvView.def.hpp"
#include "./TvAdView_TvAdCallback.def.hpp"
#include "../../../net/Uri.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../view/InputEvent.def.hpp"
#include "../../../view/KeyEvent.def.hpp"
#include "../../../view/View.def.hpp"
#include "../../../../JString.hpp"
#include "./TvAdView.def.hpp"

namespace android::media::tv::ad
{
	// Fields
	inline JString TvAdView::ERROR_KEY_ERROR_CODE()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdView",
			"ERROR_KEY_ERROR_CODE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdView::ERROR_KEY_METHOD_NAME()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdView",
			"ERROR_KEY_METHOD_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline TvAdView::TvAdView(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.media.tv.ad.TvAdView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TvAdView::TvAdView(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.media.tv.ad.TvAdView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TvAdView::TvAdView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.media.tv.ad.TvAdView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline void TvAdView::clearCallback() const
	{
		callMethod<void>(
			"clearCallback",
			"()V"
		);
	}
	inline void TvAdView::clearOnUnhandledInputEventListener() const
	{
		callMethod<void>(
			"clearOnUnhandledInputEventListener",
			"()V"
		);
	}
	inline jboolean TvAdView::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline jboolean TvAdView::dispatchUnhandledInputEvent(android::view::InputEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.object()
		);
	}
	inline JObject TvAdView::getOnUnhandledInputEventListener() const
	{
		return callObjectMethod(
			"getOnUnhandledInputEventListener",
			"()Landroid/media/tv/ad/TvAdView$OnUnhandledInputEventListener;"
		);
	}
	inline void TvAdView::notifyError(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"notifyError",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvAdView::notifyTvMessage(jint arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"notifyTvMessage",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		);
	}
	inline void TvAdView::onAttachedToWindow() const
	{
		callMethod<void>(
			"onAttachedToWindow",
			"()V"
		);
	}
	inline void TvAdView::onDetachedFromWindow() const
	{
		callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	inline void TvAdView::onLayout(jboolean arg0, jint arg1, jint arg2, jint arg3, jint arg4) const
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
	inline void TvAdView::onMeasure(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean TvAdView::onUnhandledInputEvent(android::view::InputEvent arg0) const
	{
		return callMethod<jboolean>(
			"onUnhandledInputEvent",
			"(Landroid/view/InputEvent;)Z",
			arg0.object()
		);
	}
	inline void TvAdView::onVisibilityChanged(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"onVisibilityChanged",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void TvAdView::prepareAdService(JString arg0, JString arg1) const
	{
		callMethod<void>(
			"prepareAdService",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline void TvAdView::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void TvAdView::resetAdService() const
	{
		callMethod<void>(
			"resetAdService",
			"()V"
		);
	}
	inline void TvAdView::sendCurrentChannelUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"sendCurrentChannelUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void TvAdView::sendCurrentTvInputId(JString arg0) const
	{
		callMethod<void>(
			"sendCurrentTvInputId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TvAdView::sendCurrentVideoBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"sendCurrentVideoBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void TvAdView::sendSigningResult(JString arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"sendSigningResult",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		);
	}
	inline void TvAdView::sendTrackInfoList(JObject arg0) const
	{
		callMethod<void>(
			"sendTrackInfoList",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void TvAdView::setCallback(JObject arg0, android::media::tv::ad::TvAdView_TvAdCallback arg1) const
	{
		callMethod<void>(
			"setCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/tv/ad/TvAdView$TvAdCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvAdView::setOnUnhandledInputEventListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnUnhandledInputEventListener",
			"(Landroid/media/tv/ad/TvAdView$OnUnhandledInputEventListener;)V",
			arg0.object()
		);
	}
	inline jboolean TvAdView::setTvView(android::media::tv::TvView arg0) const
	{
		return callMethod<jboolean>(
			"setTvView",
			"(Landroid/media/tv/TvView;)Z",
			arg0.object()
		);
	}
	inline void TvAdView::setZOrderMediaOverlay(jboolean arg0) const
	{
		callMethod<void>(
			"setZOrderMediaOverlay",
			"(Z)V",
			arg0
		);
	}
	inline void TvAdView::setZOrderOnTop(jboolean arg0) const
	{
		callMethod<void>(
			"setZOrderOnTop",
			"(Z)V",
			arg0
		);
	}
	inline void TvAdView::startAdService() const
	{
		callMethod<void>(
			"startAdService",
			"()V"
		);
	}
	inline void TvAdView::stopAdService() const
	{
		callMethod<void>(
			"stopAdService",
			"()V"
		);
	}
} // namespace android::media::tv::ad

// Base class headers
#include "../../../view/View.hpp"
#include "../../../view/ViewGroup.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::ad;
#endif
