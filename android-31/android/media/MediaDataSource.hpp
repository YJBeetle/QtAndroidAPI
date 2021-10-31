#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaDataSource : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaDataSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaDataSource(QJniObject obj);
		
		// Constructors
		MediaDataSource();
		
		// Methods
		jlong getSize();
		jint readAt(jlong arg0, jbyteArray arg1, jint arg2, jint arg3);
	};
} // namespace android::media

