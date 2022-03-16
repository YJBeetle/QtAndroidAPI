#include "../../JByteArray.hpp"
#include "./MediaCas.hpp"
#include "../../java/util/ArrayList.hpp"
#include "./MediaCas_Session.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	void MediaCas_Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void MediaCas_Session::processEcm(JByteArray arg0) const
	{
		callMethod<void>(
			"processEcm",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	void MediaCas_Session::processEcm(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"processEcm",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	void MediaCas_Session::setPrivateData(JByteArray arg0) const
	{
		callMethod<void>(
			"setPrivateData",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::media

