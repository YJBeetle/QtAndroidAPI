#pragma once

#include "../../../JObject.hpp"


namespace android::media::audiofx
{
	class DynamicsProcessing_Stage : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Stage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Stage(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_Stage(jboolean arg0, jboolean arg1);
		
		// Methods
		jboolean isEnabled();
		jboolean isInUse();
		void setEnabled(jboolean arg0);
		jstring toString();
	};
} // namespace android::media::audiofx

