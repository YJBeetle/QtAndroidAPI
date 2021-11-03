#pragma once

#include "../../../JObject.hpp"

namespace java::nio::channels
{
	class Pipe_SinkChannel;
}
namespace java::nio::channels
{
	class Pipe_SourceChannel;
}

namespace java::nio::channels
{
	class Pipe : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Pipe(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Pipe(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::channels::Pipe open();
		java::nio::channels::Pipe_SinkChannel sink();
		java::nio::channels::Pipe_SourceChannel source();
	};
} // namespace java::nio::channels

