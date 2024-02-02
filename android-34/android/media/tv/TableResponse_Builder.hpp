#pragma once

#include "../../../JByteArray.hpp"
#include "./TableResponse.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/SharedMemory.def.hpp"
#include "./TableResponse_Builder.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TableResponse_Builder::TableResponse_Builder(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.media.tv.TableResponse$Builder",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline android::media::tv::TableResponse TableResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/tv/TableResponse;"
		);
	}
	inline android::media::tv::TableResponse_Builder TableResponse_Builder::setTableByteArray(JByteArray arg0) const
	{
		return callObjectMethod(
			"setTableByteArray",
			"([B)Landroid/media/tv/TableResponse$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::media::tv::TableResponse_Builder TableResponse_Builder::setTableSharedMemory(android::os::SharedMemory arg0) const
	{
		return callObjectMethod(
			"setTableSharedMemory",
			"(Landroid/os/SharedMemory;)Landroid/media/tv/TableResponse$Builder;",
			arg0.object()
		);
	}
	inline android::media::tv::TableResponse_Builder TableResponse_Builder::setTableUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setTableUri",
			"(Landroid/net/Uri;)Landroid/media/tv/TableResponse$Builder;",
			arg0.object()
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
