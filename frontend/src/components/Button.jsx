import React from 'react';

const Button = ({ styles }) => (
  <button
    type="button"
    className={`py-4 px-6 font-poppins font-medium text-[18px] text-primary1 bg-blue-gradient rounded-[10px] outline-none ${styles}`}
  >
  <a href="https://spend-sync-5dmp.vercel.app/" target="_blank">
    Get Started
    </a>
  </button>
);

export default Button;
