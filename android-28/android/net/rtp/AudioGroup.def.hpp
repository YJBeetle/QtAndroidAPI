#pragma once

#include "../../../JObject.hpp"

class JArray;

namespace android::net::rtp
{
	class AudioGroup : public JObject
	{
	public:
		// Fields
		static jint MODE_ECHO_SUPPRESSION();
		static jint MODE_MUTED();
		static jint MODE_NORMAL();
		static jint MODE_ON_HOLD();
		
		// QJniObject forward
		template<typename ...Ts> explicit AudioGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioGroup(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AudioGroup();
		
		// Methods
		void clear() const;
		jint getMode() const;
		JArray getStreams() const;
		void sendDtmf(jint arg0) const;
		void setMode(jint arg0) const;
	};
} // namespace android::net::rtp

