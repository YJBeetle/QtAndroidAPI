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
		
		// QJniObject forward
		template<typename ...Ts> explicit BlackLevelPattern(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlackLevelPattern(QJniObject obj);
		
		// Constructors
		
		// Methods
		void copyTo(JIntArray arg0, jint arg1) const;
		jboolean equals(JObject arg0) const;
		jint getOffsetForIndex(jint arg0, jint arg1) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params

