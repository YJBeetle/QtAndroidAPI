#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class RemoteInput;
}
namespace android::app::slice
{
	class Slice;
}
namespace android::app::slice
{
	class SliceSpec;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
class JString;
class JString;

namespace android::app::slice
{
	class Slice_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Slice_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Slice_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Slice_Builder(android::app::slice::Slice_Builder &arg0);
		Slice_Builder(android::net::Uri arg0, android::app::slice::SliceSpec arg1);
		
		// Methods
		android::app::slice::Slice_Builder addAction(android::app::PendingIntent arg0, android::app::slice::Slice arg1, JString arg2) const;
		android::app::slice::Slice_Builder addBundle(android::os::Bundle arg0, JString arg1, JObject arg2) const;
		android::app::slice::Slice_Builder addHints(JObject arg0) const;
		android::app::slice::Slice_Builder addIcon(android::graphics::drawable::Icon arg0, JString arg1, JObject arg2) const;
		android::app::slice::Slice_Builder addInt(jint arg0, JString arg1, JObject arg2) const;
		android::app::slice::Slice_Builder addLong(jlong arg0, JString arg1, JObject arg2) const;
		android::app::slice::Slice_Builder addRemoteInput(android::app::RemoteInput arg0, JString arg1, JObject arg2) const;
		android::app::slice::Slice_Builder addSubSlice(android::app::slice::Slice arg0, JString arg1) const;
		android::app::slice::Slice_Builder addText(JString arg0, JString arg1, JObject arg2) const;
		android::app::slice::Slice build() const;
		android::app::slice::Slice_Builder setCallerNeeded(jboolean arg0) const;
	};
} // namespace android::app::slice

