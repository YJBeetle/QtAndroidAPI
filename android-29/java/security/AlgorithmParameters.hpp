#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::security
{
	class AlgorithmParametersSpi;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class AlgorithmParameters : public __JniBaseClass
	{
	public:
		// Fields
		
		AlgorithmParameters(QAndroidJniObject obj);
		// Constructors
		AlgorithmParameters() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(jstring arg0, jstring arg1);
		static QAndroidJniObject getInstance(jstring arg0, java::security::Provider arg1);
		jstring getAlgorithm();
		jbyteArray getEncoded();
		jbyteArray getEncoded(jstring arg0);
		QAndroidJniObject getParameterSpec(jclass arg0);
		QAndroidJniObject getProvider();
		void init(jbyteArray arg0);
		void init(__JniBaseClass arg0);
		void init(jbyteArray arg0, jstring arg1);
		jstring toString();
	};
} // namespace java::security

