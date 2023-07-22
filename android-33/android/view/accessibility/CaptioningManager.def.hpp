#pragma once

#include "../../../JObject.hpp"

namespace android::view::accessibility
{
	class CaptioningManager_CaptionStyle;
}
namespace android::view::accessibility
{
	class CaptioningManager_CaptioningChangeListener;
}
namespace java::util
{
	class Locale;
}

namespace android::view::accessibility
{
	class CaptioningManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaptioningManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptioningManager(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0) const;
		jfloat getFontScale() const;
		java::util::Locale getLocale() const;
		android::view::accessibility::CaptioningManager_CaptionStyle getUserStyle() const;
		jboolean isCallCaptioningEnabled() const;
		jboolean isEnabled() const;
		jboolean isSystemAudioCaptioningEnabled() const;
		jboolean isSystemAudioCaptioningUiEnabled() const;
		void removeCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0) const;
	};
} // namespace android::view::accessibility

