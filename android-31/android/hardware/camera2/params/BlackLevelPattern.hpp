#pragma once

#include "../../../../JObject.hpp"


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
		void copyTo(jintArray arg0, jint arg1);
		jboolean equals(jobject arg0);
		jint getOffsetForIndex(jint arg0, jint arg1);
		jint hashCode();
		jstring toString();
	};
} // namespace android::hardware::camera2::params

