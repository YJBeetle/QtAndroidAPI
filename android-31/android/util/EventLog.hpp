#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JObjectArray;
class JString;

namespace android::util
{
	class EventLog : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventLog(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLog(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getTagCode(JString arg0);
		static JString getTagName(jint arg0);
		static void readEvents(JIntArray arg0, JObject arg1);
		static jint writeEvent(jint arg0, JObjectArray arg1);
		static jint writeEvent(jint arg0, jfloat arg1);
		static jint writeEvent(jint arg0, jint arg1);
		static jint writeEvent(jint arg0, JString arg1);
		static jint writeEvent(jint arg0, jlong arg1);
	};
} // namespace android::util

