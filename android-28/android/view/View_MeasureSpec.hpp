#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::view
{
	class View_MeasureSpec : public __JniBaseClass
	{
	public:
		// Fields
		static jint AT_MOST();
		static jint EXACTLY();
		static jint UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit View_MeasureSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		View_MeasureSpec(QJniObject obj);
		
		// Constructors
		View_MeasureSpec();
		
		// Methods
		static jint getMode(jint arg0);
		static jint getSize(jint arg0);
		static jint makeMeasureSpec(jint arg0, jint arg1);
		static jstring toString(jint arg0);
	};
} // namespace android::view

