#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmUtils_ExtendedMetadataParser : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmUtils_ExtendedMetadataParser(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmUtils_ExtendedMetadataParser(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring get(jstring arg0);
		__JniBaseClass iterator();
		__JniBaseClass keyIterator();
	};
} // namespace android::drm

