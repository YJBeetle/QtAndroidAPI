#include "./DrmInitData_SchemeInitData.hpp"
#include "../../java/util/UUID.hpp"
#include "./DrmInitData.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	android::media::DrmInitData_SchemeInitData DrmInitData::get(java::util::UUID arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/util/UUID;)Landroid/media/DrmInitData$SchemeInitData;",
			arg0.object()
		);
	}
} // namespace android::media

