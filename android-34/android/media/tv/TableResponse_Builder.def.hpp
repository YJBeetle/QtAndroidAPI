#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::media::tv
{
	class TableResponse;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class SharedMemory;
}

namespace android::media::tv
{
	class TableResponse_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TableResponse_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TableResponse_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TableResponse_Builder(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		android::media::tv::TableResponse build() const;
		android::media::tv::TableResponse_Builder setTableByteArray(JByteArray arg0) const;
		android::media::tv::TableResponse_Builder setTableSharedMemory(android::os::SharedMemory arg0) const;
		android::media::tv::TableResponse_Builder setTableUri(android::net::Uri arg0) const;
	};
} // namespace android::media::tv

