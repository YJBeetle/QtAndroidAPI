#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::telecom
{
	class Call_RttCall : public JObject
	{
	public:
		// Fields
		static jint RTT_MODE_FULL();
		static jint RTT_MODE_HCO();
		static jint RTT_MODE_VCO();
		
		// QJniObject forward
		template<typename ...Ts> explicit Call_RttCall(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Call_RttCall(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getRttAudioMode() const;
		JString read() const;
		JString readImmediately() const;
		void setRttMode(jint arg0) const;
		void write(JString arg0) const;
	};
} // namespace android::telecom

