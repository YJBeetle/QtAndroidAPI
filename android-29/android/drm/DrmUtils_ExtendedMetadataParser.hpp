#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmUtils_ExtendedMetadataParser : public __JniBaseClass
	{
	public:
		// Fields
		
		DrmUtils_ExtendedMetadataParser(QAndroidJniObject obj);
		// Constructors
		DrmUtils_ExtendedMetadataParser() = default;
		
		// Methods
		jstring get(jstring arg0);
		QAndroidJniObject iterator();
		QAndroidJniObject keyIterator();
	};
} // namespace android::drm

