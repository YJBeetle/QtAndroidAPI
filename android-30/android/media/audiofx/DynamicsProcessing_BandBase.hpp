#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::audiofx
{
	class DynamicsProcessing_BandBase : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DynamicsProcessing_BandBase(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DynamicsProcessing_BandBase(QJniObject obj);
		
		// Constructors
		DynamicsProcessing_BandBase(jboolean arg0, jfloat arg1);
		
		// Methods
		jfloat getCutoffFrequency();
		jboolean isEnabled();
		void setCutoffFrequency(jfloat arg0);
		void setEnabled(jboolean arg0);
		jstring toString();
	};
} // namespace android::media::audiofx

