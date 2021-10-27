#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class DrmInitData_SchemeInitData;
}
namespace java::util
{
	class UUID;
}

namespace android::media
{
	class DrmInitData : public __JniBaseClass
	{
	public:
		// Fields
		
		DrmInitData(QAndroidJniObject obj);
		// Constructors
		DrmInitData() = default;
		
		// Methods
		QAndroidJniObject get(java::util::UUID arg0);
	};
} // namespace android::media

