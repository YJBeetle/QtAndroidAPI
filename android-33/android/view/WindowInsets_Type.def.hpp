#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class WindowInsets_Type : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowInsets_Type(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowInsets_Type(QJniObject obj) : JObject(obj) {}
		
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

