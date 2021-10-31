#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class CaptioningManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptioningManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CaptioningManager(QJniObject obj);
		
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

