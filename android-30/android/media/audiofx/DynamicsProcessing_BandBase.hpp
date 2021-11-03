#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_BandBase : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_BandBase(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_BandBase(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_BandBase(jboolean arg0, jfloat arg1);
		
		// Methods
		jfloat getCutoffFrequency();
		jboolean isEnabled();
		void setCutoffFrequency(jfloat arg0);
		void setEnabled(jboolean arg0);
		JString toString();
	};
} // namespace android::media::audiofx

