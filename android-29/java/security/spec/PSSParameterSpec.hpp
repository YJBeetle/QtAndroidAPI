#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::security::spec
{
	class PSSParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DEFAULT();
		static jint TRAILER_FIELD_BC();
		
		PSSParameterSpec(QAndroidJniObject obj);
		// Constructors
		PSSParameterSpec(jint arg0);
		PSSParameterSpec(jstring arg0, jstring arg1, __JniBaseClass arg2, jint arg3, jint arg4);
		PSSParameterSpec() = default;
		
		// Methods
		jstring getDigestAlgorithm();
		jstring getMGFAlgorithm();
		QAndroidJniObject getMGFParameters();
		jint getSaltLength();
		jint getTrailerField();
		jstring toString();
	};
} // namespace java::security::spec

