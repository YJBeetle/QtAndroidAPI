#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class BlackLevelPattern : public JObject
	{
	public:
		// Fields
		static jint COUNT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlackLevelPattern(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlackLevelPattern(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void copyTo(JIntArray arg0, jint arg1);
		jboolean equals(JObject arg0);
		jint getOffsetForIndex(jint arg0, jint arg1);
		jint hashCode();
		JString toString();
	};
} // namespace android::hardware::camera2::params

