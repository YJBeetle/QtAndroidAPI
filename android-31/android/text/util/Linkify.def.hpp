#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::widget
{
	class TextView;
}
class JString;
namespace java::util::regex
{
	class Pattern;
}

namespace android::text::util
{
	class Linkify : public JObject
	{
	public:
		// Fields
		static jint ALL();
		static jint EMAIL_ADDRESSES();
		static jint MAP_ADDRESSES();
		static jint PHONE_NUMBERS();
		static jint WEB_URLS();
		static JObject sPhoneNumberMatchFilter();
		static JObject sPhoneNumberTransformFilter();
		static JObject sUrlMatchFilter();
		
		// QJniObject forward
		template<typename ...Ts> explicit Linkify(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Linkify(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Linkify();
		
		// Methods
		static jboolean addLinks(JObject arg0, jint arg1);
		static jboolean addLinks(android::widget::TextView arg0, jint arg1);
		static jboolean addLinks(JObject arg0, jint arg1, JObject arg2);
		static jboolean addLinks(JObject arg0, java::util::regex::Pattern arg1, JString arg2);
		static jboolean addLinks(JObject arg0, java::util::regex::Pattern arg1, JString arg2, JObject arg3, JObject arg4);
		static jboolean addLinks(JObject arg0, java::util::regex::Pattern arg1, JString arg2, JArray arg3, JObject arg4, JObject arg5);
		static jboolean addLinks(JObject arg0, java::util::regex::Pattern arg1, JString arg2, JArray arg3, JObject arg4, JObject arg5, JObject arg6);
		static void addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, JString arg2);
		static void addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, JString arg2, JObject arg3, JObject arg4);
		static void addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, JString arg2, JArray arg3, JObject arg4, JObject arg5);
	};
} // namespace android::text::util

