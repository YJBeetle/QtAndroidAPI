#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class WindowInsets_Type : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInsets_Type(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsets_Type(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint captionBar();
		static jint displayCutout();
		static jint ime();
		static jint mandatorySystemGestures();
		static jint navigationBars();
		static jint statusBars();
		static jint systemBars();
		static jint systemGestures();
		static jint tappableElement();
	};
} // namespace android::view

