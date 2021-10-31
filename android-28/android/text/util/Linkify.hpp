#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::widget
{
	class TextView;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::text::util
{
	class Linkify : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL();
		static jint EMAIL_ADDRESSES();
		static jint MAP_ADDRESSES();
		static jint PHONE_NUMBERS();
		static jint WEB_URLS();
		static __JniBaseClass sPhoneNumberMatchFilter();
		static __JniBaseClass sPhoneNumberTransformFilter();
		static __JniBaseClass sUrlMatchFilter();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Linkify(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Linkify(QAndroidJniObject obj);
		
		// Constructors
		Linkify();
		
		// Methods
		static jboolean addLinks(__JniBaseClass arg0, jint arg1);
		static jboolean addLinks(android::widget::TextView arg0, jint arg1);
		static jboolean addLinks(__JniBaseClass arg0, java::util::regex::Pattern arg1, jstring arg2);
		static jboolean addLinks(__JniBaseClass arg0, java::util::regex::Pattern arg1, jstring arg2, __JniBaseClass arg3, __JniBaseClass arg4);
		static jboolean addLinks(__JniBaseClass arg0, java::util::regex::Pattern arg1, jstring arg2, jarray arg3, __JniBaseClass arg4, __JniBaseClass arg5);
		static void addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, jstring arg2);
		static void addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, jstring arg2, __JniBaseClass arg3, __JniBaseClass arg4);
		static void addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, jstring arg2, jarray arg3, __JniBaseClass arg4, __JniBaseClass arg5);
	};
} // namespace android::text::util

