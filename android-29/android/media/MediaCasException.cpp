#include "../../JString.hpp"
#include "./MediaCasException.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaCasException::MediaCasException(QJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::media

