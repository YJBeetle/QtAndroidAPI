#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::media
{
	class MediaDataSource : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDataSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDataSource(QAndroidJniObject obj);
		
		// Constructors
		MediaDataSource();
		
		// Methods
		jlong getSize();
		jint readAt(jlong arg0, JByteArray arg1, jint arg2, jint arg3);
	};
} // namespace android::media

