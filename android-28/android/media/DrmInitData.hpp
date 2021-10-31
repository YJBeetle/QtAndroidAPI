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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmInitData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmInitData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::DrmInitData_SchemeInitData get(java::util::UUID arg0);
	};
} // namespace android::media
