#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

namespace android::text
{
	class AutoText : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AutoText(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AutoText(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring get(jstring arg0, jint arg1, jint arg2, android::view::View arg3);
		static jint getSize(android::view::View arg0);
	};
} // namespace android::text

