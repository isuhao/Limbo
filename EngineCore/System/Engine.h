
#include "../pch.h"
#include "../Base/Singleton.h"
#include "../IO/LBIO.h"
#include "../Math/LBMath.h"
#include "System.h"
#include "../Input/Input.h"
#include "SystemCmd.h"
#include "../Show/Render.h"
#include "../Show/Sound.h"
#include "InputKeys.h"
namespace Limbo
{
	class Engine :public Singleton<Engine>
	{
	public:
		bool Create();
		bool Destory();
		bool CallSystemCmd(SystemCmd cmd, int32_t para0, int32_t para1);
		bool InputHandler(int inputkey);
	protected:
	private:
		std::shared_ptr<System> m_system;
		std::shared_ptr<Input>   m_input;
		std::shared_ptr<Render>   m_render;
		std::shared_ptr<Sound>   m_sound;
	};

}