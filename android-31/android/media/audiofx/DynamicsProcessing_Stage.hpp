#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::audiofx
{
	class DynamicsProcessing_Stage : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_Stage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_Stage(QAndroidJniObject obj);
		
		// Constructors
		DynamicsProcessing_Stage(jboolean arg0, jboolean arg1);
		
		// Methods
		jboolean isEnabled() const;
		jboolean isInUse() const;
		void setEnabled(jboolean arg0) const;
		JString toString() const;
	};
} // namespace android::media::audiofx

