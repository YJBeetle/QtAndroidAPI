#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::media::tv
{
	class TvContract : public JObject
	{
	public:
		// Fields
		static JString ACTION_INITIALIZE_PROGRAMS();
		static JString ACTION_PREVIEW_PROGRAM_ADDED_TO_WATCH_NEXT();
		static JString ACTION_PREVIEW_PROGRAM_BROWSABLE_DISABLED();
		static JString ACTION_REQUEST_CHANNEL_BROWSABLE();
		static JString ACTION_WATCH_NEXT_PROGRAM_BROWSABLE_DISABLED();
		static JString AUTHORITY();
		static JString EXTRA_CHANNEL_ID();
		static JString EXTRA_PREVIEW_PROGRAM_ID();
		static JString EXTRA_WATCH_NEXT_PROGRAM_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvContract(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri buildChannelLogoUri(android::net::Uri arg0);
		static android::net::Uri buildChannelLogoUri(jlong arg0);
		static android::net::Uri buildChannelUri(jlong arg0);
		static android::net::Uri buildChannelUriForPassthroughInput(JString arg0);
		static android::net::Uri buildChannelsUriForInput(JString arg0);
		static JString buildInputId(android::content::ComponentName arg0);
		static android::net::Uri buildPreviewProgramUri(jlong arg0);
		static android::net::Uri buildPreviewProgramsUriForChannel(android::net::Uri arg0);
		static android::net::Uri buildPreviewProgramsUriForChannel(jlong arg0);
		static android::net::Uri buildProgramUri(jlong arg0);
		static android::net::Uri buildProgramsUriForChannel(android::net::Uri arg0);
		static android::net::Uri buildProgramsUriForChannel(jlong arg0);
		static android::net::Uri buildProgramsUriForChannel(android::net::Uri arg0, jlong arg1, jlong arg2);
		static android::net::Uri buildProgramsUriForChannel(jlong arg0, jlong arg1, jlong arg2);
		static android::net::Uri buildRecordedProgramUri(jlong arg0);
		static android::net::Uri buildWatchNextProgramUri(jlong arg0);
		static jboolean isChannelUri(android::net::Uri arg0);
		static jboolean isChannelUriForPassthroughInput(android::net::Uri arg0);
		static jboolean isChannelUriForTunerInput(android::net::Uri arg0);
		static jboolean isProgramUri(android::net::Uri arg0);
		static jboolean isRecordedProgramUri(android::net::Uri arg0);
		static void requestChannelBrowsable(android::content::Context arg0, jlong arg1);
	};
} // namespace android::media::tv

