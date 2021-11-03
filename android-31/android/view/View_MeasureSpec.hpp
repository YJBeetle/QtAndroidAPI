#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::view
{
	class View_MeasureSpec : public JObject
	{
	public:
		// Fields
		static jint AT_MOST();
		static jint EXACTLY();
		static jint UNSPECIFIED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit View_MeasureSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		View_MeasureSpec(QAndroidJniObject obj);
		
		// Constructors
		View_MeasureSpec();
		
		// Methods
		static jint getMode(jint arg0);
		static jint getSize(jint arg0);
		static jint makeMeasureSpec(jint arg0, jint arg1);
		static JString toString(jint arg0);
	};
} // namespace android::view

