#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
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
		CaptioningManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0);
		jfloat getFontScale();
		java::util::Locale getLocale();
		android::view::accessibility::CaptioningManager_CaptionStyle getUserStyle();
		jboolean isEnabled();
		void removeCaptioningChangeListener(android::view::accessibility::CaptioningManager_CaptioningChangeListener arg0);
	};
} // namespace android::view::accessibility

